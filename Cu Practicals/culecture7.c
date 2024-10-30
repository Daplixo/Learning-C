#include<stdio.h>

// Code for divison of two numbers
int main () {
    int num1, num2, quotient;

    // Enter two integers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Divide two numbers
    quotient = num1 / num2;

    // Output the result
    printf("The quotient of %d and %d is %d. \n", num1, num2, quotient);

    return 0 ;

}