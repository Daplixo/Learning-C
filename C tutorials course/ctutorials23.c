#include <stdio.h>

// Program to print Prime numbers in a range.
int main () {
    int lower, upper, i, j, isprime;

    // Input from the user.
    printf("Enter the lower limit number of the range:\n ");
    scanf ("%d", &lower);
    printf("Enter the upper limit number of the range:\n ");
    scanf ("%d", &upper);

    // Loop through each number in the range.
    printf ("prime numbers between %d and %d are:\n ", lower, upper);
    for (i = lower; i <= upper; i++) {
        // Skip numbers less than or equals to 1.
        if (i <= 1) {
            continue;
        }
        // Assume the number is Prime.
        isprime = 1;
    // Check if the number is Prime.
    for ( j = 2; j <= i/2; j++) {
        if (i % j == 0) {
            isprime = 0; // Found a factor so it is not prime.
            break; // NO need to check further.
        }
    }
    // If the number is Prime, print it.
    if (isprime) {
        printf("%d\n", i);
    }
    }
    return 0;
}
