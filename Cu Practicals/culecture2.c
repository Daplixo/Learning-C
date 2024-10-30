#include <stdio.h>
// Code  for swapping two variables using a third variable.

int main () {
    int a, b, temp;

    // input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // display the original values
    printf("before swapping: a = %d, b = %d\n", a, b);

    // swapping logic
    temp = a;
    a = b;
    b = temp;

    // display the swapped values
    printf("after swapping: a = %d, b = %d\n", a, b);

    return 0 ;
}