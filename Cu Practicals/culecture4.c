#include<stdio.h>

// Code for addition of two numbers
int main () {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the result
    printf("The sum of %d and %d is %d. \n", num1, num2, sum);

    return 0;
}