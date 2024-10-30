#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int start_game = 0;
    int how_to_play = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Do you want to start the game? (1 for yes, 0 for no): \n");
    scanf("%d", &start_game);

    if (start_game == 1) {
        goto start;
    } else {
        printf("Do you want to know how to play? (1 for yes, 0 for no): \n");
        scanf("%d", &how_to_play);

        if (how_to_play == 1) {
            printf("\n*** How to Play ***\n");
            printf("There are three levels in this game: 1, 2, and 3.\n");
            printf("Each level increases in difficulty.\n\n");

            printf("Level 1:\n");
            printf(" - Select a number between 1 and 10.\n");
            printf(" - You get 3 attempts.\n");
            printf(" - The target number changes with every attempt.\n\n");

            printf("Level 2:\n");
            printf(" - Select a number between 1 and 50.\n");
            printf(" - You get 3 attempts.\n");
            printf(" - The target number remains the same for all attempts.\n");
            printf(" - The game will give you hints whether your guess is too high or too low.\n\n");

            printf("Level 3:\n");
            printf(" - Select a number between 1 and 100.\n");
            printf(" - You get 5 attempts.\n");
            printf(" - Similar to Level 2, the game will provide hints.\n");
            printf("Good luck!\n\n");

            printf("Are you ready to play now? (1 for yes, 0 for no): \n");
            scanf("%d", &start_game);

            if (start_game != 1) {
                printf("Goodbye!\n");
                return 0;
            }
        } else {
            printf("Goodbye!\n");
            return 0;
        }
    }

start:
    srand(time(NULL));
    int level;
    levelselect:
    printf("\nChoose a difficulty level (1 to 3): ");
    scanf("%d", &level);

    if (level == 1) {
        int min = 1, max = 10, attempts = 0, a, target1;
        
        replay1:
        attempts = 0;
        while (attempts < 3) {
            target1 = min + rand() % (max - min + 1);
            printf("Enter a number from 1 to 10: ");
            scanf("%d", &a);

            if (a == target1) {
                printf("Congratulations! You guessed it right!\n");
                break;
            } else {
                printf("Wrong guess! The target number was %d.\n", target1);
            }
            attempts++;
        }

        printf("Level 1 over!\n");

        int replay_choice = 0, change_level_choice = 0;
        printf("Do you want to play Level 1 again? (1 for yes, 0 for no): ");
        scanf("%d", &replay_choice);
        if (replay_choice == 1) {
            goto replay1;
        } else {
            printf("Do you want to change the difficulty level? (1 for yes, 0 for no): ");
            scanf("%d", &change_level_choice);
            if (change_level_choice == 1) {
                goto levelselect;
            } else {
                printf("Thanks for Playing!\n");
                return 0;
            }
        }
    }

    else if (level == 2) {
        int min = 1, max = 50, attempts2 = 0, a, target2;

        replay2:
        attempts2 = 0;
        target2 = min + rand() % (max - min + 1);
        while (attempts2 < 3) {
            printf("Enter a number from 1 to 50: ");
            scanf("%d", &a);

            if (a < target2) {
                printf("It's less than the target number.\n");
            } else if (a > target2) {
                printf("It's more than the target number.\n");
            } else {
                printf("Congratulations! You guessed it right!\n");
                break;
            }
            attempts2++;
        }

        printf("Level 2 over!\n");
        printf("The target number was %d.\n", target2);

        int replay_choice = 0, change_level_choice = 0;
        printf("Do you want to play Level 2 again? (1 for yes, 0 for no): ");
        scanf("%d", &replay_choice);
        if (replay_choice == 1) {
            goto replay2;
        } else {
            printf("Do you want to change the difficulty level? (1 for yes, 0 for no): ");
            scanf("%d", &change_level_choice);
            if (change_level_choice == 1) {
                goto levelselect;
            } else {
                printf("Thanks for Playing!\n");
                return 0;
            }
        }
    }

    else if (level == 3) {
        int min = 1, max = 100, attempts3 = 0, a, target3;

        replay3:
        attempts3 = 0;
        target3 = min + rand() % (max - min + 1);
        while (attempts3 < 5) {
            printf("Enter a number from 1 to 100: ");
            scanf("%d", &a);

            if (a < target3) {
                printf("It's less than the target number.\n");
            } else if (a > target3) {
                printf("It's more than the target number.\n");
            } else {
                printf("Congratulations! You guessed it right!\n");
                break;
            }
            attempts3++;
        }

        printf("Level 3 over!\n");
        printf("The target number was %d.\n", target3);

        int replay_choice = 0, change_level_choice = 0;
        printf("Do you want to play Level 3 again? (1 for yes, 0 for no): ");
        scanf("%d", &replay_choice);
        if (replay_choice == 1) {
            goto replay3;
        } else {
            printf("Do you want to change the difficulty level? (1 for yes, 0 for no): ");
            scanf("%d", &change_level_choice);0
            if (change_level_choice == 1) {
                goto levelselect;
            } else {
                printf("Thanks for Playing!\n");
                return 0;
            }
        }
    }

    return 0;
}
