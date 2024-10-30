#include<stdio.h>

// Code for printing the number from 0 to n, if n is given by the user.
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n ) {
        printf("%d\n", i);
        i++;
    }
    return 0 ;
}