#include<stdio.h>

// Code for finding area for circle
int main () {
    float radius;

    // Enter value of radius
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Print the output and apply the formula
    printf("Area od circle is %f.", 3.14 * radius * radius);

    return 0 ;
}