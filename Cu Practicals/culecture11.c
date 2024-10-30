// Program for checking bank balance by entering pin and using if else statements.
#include <stdio.h>
int main () {
    int card1, card2, card3, pin;
    card1 = 1000;
    card2 = 2000;
    card3 = 3000;
// input from user
    printf("Insert your card.\n");
    printf("Enter your pin: ");
    scanf("%d", &pin);
// compare entered pin from the existing value in the program.
    if (pin == card1) {
        printf("Your pin is correct.\n");
        printf("Your bank balance is: 200rs\n");
    } else if ( pin == card2) {
        printf ("Your pin is correct.\n");
        printf ("Your bank balance is: 500rs\n");
    } else if ( pin == card3) {
        printf ("Your pin is correct.\n");
        printf ("Your bank balance is: 1000rs\n");
    } else { // if the entered pin does not match the existing pin
        printf("Incorrect pin!\n");
    }
    printf("Thank You");

    return 0;

}