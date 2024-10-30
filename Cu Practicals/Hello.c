#include <stdio.h>
#include <stdlib.h>
// Code for finding out the largest variable without using logical operators.
int main () {
    int a, b, c;
    int largest;

    // input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d" , &a, &b ,&c);

    // Assume the first number is the largest
    largest = a;

    // use subtraction to determine if b is larger
    largest = (largest + b + abs(largest - b)) / 2;

    // use subtraction to determine if c is larger
    largest = (largest + c + abs(largest - c)) / 2;

    // output the result
    printf("the largest number is: %d\n", largest);
    

    return 0 ;
}