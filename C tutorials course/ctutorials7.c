#include<stdio.h>

// Code for finding the smallest number among given numbers.
int main () {
    int num1, num2, num3, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 as the smallest
    smallest = num1;
    if (num1 > num2) {
        smallest = num2;
    } 
    if (num2 > num3) {
        smallest = num3;
    }

    // Print the output.
    printf("Smallest number is %d. \n", smallest);

    return 0 ;
}