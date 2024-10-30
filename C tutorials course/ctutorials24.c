#include <stdio.h>
// print hello the number of time user inputs.

// Declaration / prototype
void printHello () ;

int main () {
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printHello() ;
    }

    return 0;
} 
// function defintion
void printHello () {
    printf ("Hello!\n");
}
