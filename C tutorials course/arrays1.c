// Write a program to enter price of 3 items & print their final cost with gst
#include <stdio.h>

int main () {
    float price[3];
    printf("Enter price of 3 items : ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Total Price of 1 : %f\n", price[0]+(0.18*price[0]));
    printf("Total Price of 2 : %f\n", price[1]+(0.18*price[1]));
    printf("Total Price of 3 : %f\n", price[2]+(0.18*price[2]));

    return 0;
} 
/*
Initialization of Array
int marks[] = {97, 98, 89};
int marks[3] = {97, 98, 89};
*/

