#include<stdio.h>

// Code for finding area of a square (side is given)
int main () {
    float side;

    // Input a value for side 
    printf("Length of side is: ");
    scanf("%f", &side);

    // Print the output and apply the formula
    printf("Area of square is %f", side * side);

    return 0 ;

}
