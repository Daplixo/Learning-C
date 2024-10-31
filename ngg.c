#include <gtk/gtk.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

GtkWidget *guess_entry;
GtkWidget *feedback_label;
GtkWidget *level_combo;
GtkWidget *start_button;
GtkWidget *guess_button;
GtkWidget *restart_button;
GtkWidget *how_to_play_button;
GtkWidget *exit_button;

int level, min, max, target, attempts, max_attempts;
gboolean game_active = FALSE;

void start_game(GtkWidget *widget, gpointer data) {
    level = gtk_combo_box_get_active(GTK_COMBO_BOX(level_combo)) + 1;

    switch (level) {
        case 1:
            min = 1;
            max = 10;
            max_attempts = 2;
            break;
        case 2:
            min = 1;
            max = 50;
            max_attempts = 2;
            break;
        case 3:
            min = 1;
            max = 100;
            max_attempts = 4;
            break;
        default:
            gtk_label_set_text(GTK_LABEL(feedback_label), "Please select a valid level.");
            return;
    }

    srand(time(NULL));
    target = min + rand() % (max - min + 1);
    attempts = 0;
    game_active = TRUE;

    gtk_widget_set_sensitive(start_button, FALSE);
    gtk_widget_set_sensitive(guess_button, TRUE);
    gtk_widget_set_sensitive(guess_entry, TRUE);
    gtk_widget_set_sensitive(restart_button, FALSE);

    gtk_label_set_text(GTK_LABEL(feedback_label), "Game started! Enter your guess.");
}

void check_guess(GtkWidget *widget, gpointer data) {
    const gchar *guess_text = gtk_entry_get_text(GTK_ENTRY(guess_entry));
    int guess = atoi(guess_text);

    if (!game_active) {
        gtk_label_set_text(GTK_LABEL(feedback_label), "Game is not active. Please start a new game.");
        return;
    }

    if (guess_text[0] == '\0' || !isdigit(guess_text[0])) {
        gtk_label_set_text(GTK_LABEL(feedback_label), "Invalid input! Please enter a number.");
        return;
    }

    if (guess < min || guess > max) {
        gtk_label_set_text(GTK_LABEL(feedback_label), "Guess out of range! Try again.");
        return;
    }

    // Increment attempts after validating input
    attempts++;

    if (attempts > max_attempts) {
        gtk_label_set_text(GTK_LABEL(feedback_label), g_strdup_printf("Out of attempts! The target number was %d. Please restart the game.", target));
        gtk_widget_set_sensitive(guess_button, FALSE);
        gtk_widget_set_sensitive(restart_button, TRUE);
        game_active = FALSE;
        return;
    }

    if (level == 1) {
        // In Level 1, target number changes with each guess
        target = min + rand() % (max - min + 1);
        if (guess == target) {
            gtk_label_set_text(GTK_LABEL(feedback_label), "Congratulations! You guessed it right!");
            gtk_widget_set_sensitive(guess_button, FALSE);
            gtk_widget_set_sensitive(restart_button, TRUE);
            game_active = FALSE;
        } else {
            gtk_label_set_text(GTK_LABEL(feedback_label), g_strdup_printf("Wrong guess! The target number was %d. Try again.", target));
        }
    } else {
        if (guess < target) {
            gtk_label_set_text(GTK_LABEL(feedback_label), "It's less than the target number.");
        } else if (guess > target) {
            gtk_label_set_text(GTK_LABEL(feedback_label), "It's more than the target number.");
        } else {
            gtk_label_set_text(GTK_LABEL(feedback_label), "Congratulations! You guessed it right!");
            gtk_widget_set_sensitive(guess_button, FALSE);
            gtk_widget_set_sensitive(restart_button, TRUE);
            game_active = FALSE;
        }
    }
}


void restart_game(GtkWidget *widget, gpointer data) {
    start_game(NULL, NULL);
    gtk_label_set_text(GTK_LABEL(feedback_label), "Game restarted! Enter your guess.");
}

void show_how_to_play(GtkWidget *widget, gpointer data) {
    gtk_label_set_text(GTK_LABEL(feedback_label),
        "How to Play:\n"
        "There are three levels in this game: 1, 2, and 3.\n"
        "Each level increases in difficulty.\n\n"

        "Level 1:\n"
        " - Select a number between 1 and 10.\n"
        " - You get 3 attempts.\n"
        " - The target number changes with every attempt.\n\n"

        "Level 2:\n"
        " - Select a number between 1 and 50.\n"
        " - You get 3 attempts.\n"
        " - The target number remains the same for all attempts.\n"
        " - The game will give you hints whether your guess is too high or too low.\n\n"

        "Level 3:\n"
        " - Select a number between 1 and 100.\n"
        " - You get 5 attempts.\n"
        " - Similar to Level 2, the game will provide hints.\n"
        "Good luck!\n");
}

void exit_game(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *level_label;
    GtkWidget *vbox;
    GtkWidget *hbox;
    GtkWidget *entry_label;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Number Guessing Game");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 250);

    vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    level_label = gtk_label_new("Select difficulty level:");
    gtk_box_pack_start(GTK_BOX(vbox), level_label, FALSE, FALSE, 0);

    level_combo = gtk_combo_box_text_new();
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(level_combo), "Level 1");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(level_combo), "Level 2");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(level_combo), "Level 3");
    gtk_box_pack_start(GTK_BOX(vbox), level_combo, FALSE, FALSE, 0);

    start_button = gtk_button_new_with_label("Start Game");
    gtk_box_pack_start(GTK_BOX(vbox), start_button, FALSE, FALSE, 0);
    g_signal_connect(start_button, "clicked", G_CALLBACK(start_game), NULL);

    entry_label = gtk_label_new("Enter your guess:");
    gtk_box_pack_start(GTK_BOX(vbox), entry_label, FALSE, FALSE, 0);

    guess_entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox), guess_entry, FALSE, FALSE, 0);

    guess_button = gtk_button_new_with_label("Submit Guess");
    gtk_box_pack_start(GTK_BOX(vbox), guess_button, FALSE, FALSE, 0);
    gtk_widget_set_sensitive(guess_button, FALSE);
    g_signal_connect(guess_button, "clicked", G_CALLBACK(check_guess), NULL);

    restart_button = gtk_button_new_with_label("Restart Game");
    gtk_box_pack_start(GTK_BOX(vbox), restart_button, FALSE, FALSE, 0);
    gtk_widget_set_sensitive(restart_button, FALSE);
    g_signal_connect(restart_button, "clicked", G_CALLBACK(restart_game), NULL);

    feedback_label = gtk_label_new("");
    gtk_box_pack_start(GTK_BOX(vbox), feedback_label, FALSE, FALSE, 0);

    hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), hbox, FALSE, FALSE, 0);

    how_to_play_button = gtk_button_new_with_label("How to Play");
    gtk_box_pack_start(GTK_BOX(hbox), how_to_play_button, FALSE, FALSE, 0);
    g_signal_connect(how_to_play_button, "clicked", G_CALLBACK(show_how_to_play), NULL);

    exit_button = gtk_button_new_with_label("Exit");
    gtk_box_pack_start(GTK_BOX(hbox), exit_button, FALSE, FALSE, 0);
    g_signal_connect(exit_button, "clicked", G_CALLBACK(exit_game), NULL);

    gtk_widget_show_all(window);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_main();

    return 0;
}

