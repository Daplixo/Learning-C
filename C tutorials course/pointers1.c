#include <stdio.h> 

int main () {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;// x = 0
    printf("The value of x is %d\n", x); //0
    printf("The value of *ptr is %d\n", *ptr); //0

    *ptr += 5; // x = 5
    printf("The value of x is %d\n", x); //5
    printf("The value of *ptr is %d\n", *ptr); //5

    (*ptr)++;
    printf("The value of x is %d\n", x); // 6
    printf("The value of *ptr is %d\n", *ptr); //6


    return 0;
}