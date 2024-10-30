#include <stdio.h>
// Print the sum of first 'n' Natural number also, Print them in reverse.
int main () {
    int n ;
    printf("Enter a number: ");
    scanf ("%d", &n);

    int sum = 0;
    for (int j = n; j >= 1; j--) {
        sum = sum + j; 
        printf ("%d\n", j);

    }
    printf("Sum is %d\n", sum);

    return 0 ;
}