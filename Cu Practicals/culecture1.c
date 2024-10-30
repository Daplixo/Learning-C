#include <stdio.h>
// Code for finding out the largest number, With using logical operators.
int main () {
    int num1, num2, num3, largest;
    num1 = 4;
    num2 = 123;
    num3 = 77;

    // assume the first number is the largest
    largest = num1;

    // compare with the second number
    if (num2 > largest) {
        largest = num2;
    }

    // compare with the third number
    if (num3 > largest) {
        largest = num3;
    }
    // print the largest number
    printf("the largest number is : %d\n", largest);

    return 0 ;
}