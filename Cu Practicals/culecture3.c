#include <stdio.h>
// Code for finding out if a number is Prime or not.

int main () {
    int n, i, isPrime = 1;

    // input a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Edge case for numbers less than 2
    if (n < 2){
        isPrime = 0;
    } else {
        // check for factors
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

// Output the result
if (isPrime)
printf("%d is a Prime number.\n", n);
else
printf("%d is not a Prime number.\n", n);

return 0;
}