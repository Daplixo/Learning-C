// Program for checking bank balance by entering pin and using conditional statements.
// if else and else if.
#include<stdio.h>
int main () {
    int card, pin;

    // Input data from user
    printf("Insert your card (1,2 or 3): ");
    scanf ("%d", &card);

    // To check valid card selection
    if (card < 1 || card > 3) {
        printf("Invalid card selection.\n");
        return 1; // end the code with an error
    }
    printf("Enter your pin: ");
    scanf("%d", &pin);

    // Check card and pin using if else statements.
    if (card == 1) {
        if (pin == 1000){
            printf("Your pin is correct.\t");
            printf("Your bank balance is: 200rs\n");
            printf("Thank you");
        } else {
            printf("Invalid pin for card 1.\n");
            return 2; // End the code with an error. 
        }
    } else if (card == 2) {
        if (pin == 2000){
            printf("Your pin is correct.\t");
            printf("Your bank balance is: 500rs\n");
            printf("Thank you");
        } else {
            printf("Invalid pin for card 2.\n");
            return 2; // End the code with an error. 
        }
    } else if (card == 3) {
        if (pin == 3000){
            printf("Your pin is correct.\t");
            printf("Your bank balance is: 1000rs\n");
            printf("Thank you");
        } else {
            printf("Invalid pin for card 3.\n");
            return 2; // End the code with an error. 
        }
    }
    return 0 ;
}