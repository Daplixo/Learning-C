// Program for checking bank balance by entering pin and using conditional statements.
// if and else
#include<stdio.h>
int main () {
    int card, pin;
      
    // Input from user
    printf("Insert your card(1, 2, or 3): ");
    scanf("%d", &card);
    if (card < 1 || card > 3) { // To insure valid input only.
        printf("Invalid card selection.\n");
        return 1; // End the code with an error
    } 
    printf("Enter your pin: ");
    scanf("%d", &pin);
    // to compare Input data from existing data for output.
    switch (card) {
        case 1: 
        if(pin == 1000) {
        printf("Your pin is correct.\n");
        printf("Your bank balance is: 200rs\n");
        printf("Thank you");
        } else {
            printf("Invalid pin for card 1\n");
            return 2; // End the code with an error
        }
        break;
        case 2:
        if (pin == 2000) {
        printf("Your pin is correct.\n");
        printf("Your bank balance is: 500rs\n");
        printf("Thank you");
        } else {
            printf("Invalid pin for card 2\n");
            return 2; // End the code with an error
        }
        break;
        case 3:
        if (pin == 3000) {
        printf("Your pin is correct.\n");
        printf("Your bank balance is: 1000rs\n");
        printf("Thank you");
        } else {
            printf("Invalid pin for card 3\n");
            return 2; // End the code with an error
        }
        break;

        default : // If the entered pin does not match the existing data.
        printf("Incorrect pin!\n");
        break;
    }
    
    return 0 ;
}