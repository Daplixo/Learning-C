#include<stdio.h>

// Code for finding the product of two numbers
int main () {
    int num1, num2, product;

    // Input two integers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Multiply two numbers
    product = num1 * num2;

    // Output the result
    printf("The product of %d and %d is %d. \n", num1, num2, product);

    return 0 ;
}