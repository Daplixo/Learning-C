#include <stdio.h>
#include <math.h>  // Required for using the pow() function

int main() {

    int i, num, sum, count;

    // Print the message indicating the range
    printf("All Armstrong numbers between 1 and 1000 are:\n");

    // Loop through numbers from 1 to 1000
    for (i = 1; i <= 1000; i++) {
        num = i;   // Store the current number in `num` for manipulation
        count = 0; // Reset digit count for each number

        // Count the number of digits in the number
        while (num != 0) {
            num /= 10;
            count++;
        }

        num = i;   // Reset `num` to the original number `i`
        sum = 0;   // Initialize sum to 0 for the current number

        // Calculate the sum of the powers of the digits
        sum += pow(num % 10, count);                       // Last digit raised to the power of digit count
        sum += pow((num % 100 - num % 10) / 10, count);    // Middle digit raised to the power of digit count
        sum += pow((num % 1000 - num % 100) / 100, count); // First digit raised to the power of digit count

        // Check if the sum of powers equals the original number
        if (sum == i) {
            printf("%d ", i);  // Print the Armstrong number
        }
    }

    printf("\n");  // Newline for neat output

    return 0;
}
