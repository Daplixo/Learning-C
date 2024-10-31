#include <string.h>
#include <stdio.h>

struct cricket {
    char playerName[100]; // Player name
    char teamName[100];   // Team name
    float battingAvg;     // Batting Average
};

int main () {
    struct cricket s[5], t; // Array of cricket structures
    int i, j, n =5;         // Number fo players

    printf ("\nEnter data of %d players", n);

    // Input data for each player 
    for (i = 0; i < n; i++) {
        printf("\nEnter Player Name, Team Name & Batting Average for player %d: ", i+1);
        scanf("%s %s %f", s[i].playerName, s[i].teamName, &s[i].battingAvg);
    }

    // Sorting players based on team name
    for (i = 1; i < n; i++){
        for(j = 0; j < n-i; j++){
            if (strcmp(s[j].teamName, s[j + 1].teamName) > 0){
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }

    // Displaying the sorted player list
    printf("\nAfter team-wise sorting, Player list is: \n");
    for (i =0; i < n; i++) {
        printf("%s\t %s\t %.2f\n", s[i].playerName, s[i].teamName, s[i].battingAvg);
    }

    return 0;
}