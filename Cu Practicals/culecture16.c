// Find the factorial of a number using loop.
#include <stdio.h>

int main () {
    int n, i;
    unsigned long long fact = 1;
    
    // Input from user.
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Find factorial
    for (i = 1; i<= n; ++i) {
        fact *= i;
    }

    printf("Factorial or %d = %llu\n", n, fact);
    return 0;
}