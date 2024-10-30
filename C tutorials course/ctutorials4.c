#include<stdio.h>

// Code for finding if a number is greater than 9 and less than 100.
int main () {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if ( x > 9 && x < 100) {
        printf("The given number is a two digit number.");

    }
    else {
        printf("The given number is not a two digit number.");
    }

    return 0 ;

}