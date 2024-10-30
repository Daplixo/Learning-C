#include<stdio.h>

// Code for Pin code verification.
int main () {

    int card, pin;
    card = 6000;

    // Enter pin from user
    printf("Enter your pin: ");
    scanf("%d", &pin);

    if (card == pin) {
        printf ("Your pin has matched");
    } else {
        printf ("Your pin is incorrect");
    }
    return 0;
}