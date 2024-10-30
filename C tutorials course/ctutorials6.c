#include<stdio.h>

// Code for finding average of 3 numbers.
int main () {
    int num1, num2, num3, average;

    // Enter three numbers.
    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find average by applying formula
    average = num1 + num2 + num3 / 3;

    // Print the output
    printf("Average is %d. \n", average);

    return 0 ;
}