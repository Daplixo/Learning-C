#include<stdio.h>

// Write a program to check if a number is prime or not using loops.
int main () {
    int n, i, isPrime = 1; // Assume the prime number.

// Input from user.
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle edge cases.
    if (n <= 1 ) {
        isPrime = 0; // Number less than or equals to 1 are not prime numbers.
    } else {
        // Loop from 2 to "n" to check for factors.
        for ( i = 2; i <= n/2; i++ ){
            if (n % i == 0) {
                isPrime = 0;
                break; // No need to check further.

            }
            
        }
    }
    // Output the result.
    if (isPrime) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is not a Prime number.\n", n);
    }
    return 0 ;
}