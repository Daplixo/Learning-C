#include<stdio.h>

// Code for subtraction of two numbers
int main () {
    int num1, num2, sub;

    // Input two integers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Subtract two numbers
    sub = num1 - num2;

    // Output the result
    printf("The sub of %d and %d is %d. \n", num1, num2, sub);

    return 0;

}