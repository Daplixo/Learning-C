#include <stdio.h>

void tables(int arr[][10], int n) {
    int i, j;
    
    // Loop to generate and store multiplication table
    for (i = 0; i < 10; i++) {
        arr[n-1][i] = n * (i + 1); // Fill the table for the number 'n'
    }

    // Printing the multiplication table for number 'n'
    printf("Multiplication table of %d:\n", n);
    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", n, i + 1, arr[n-1][i]);
    }
}

int main() {
    int arr[10][10];  // 2D array to store multiplication tables
    int num1 = 2;
    int num2 = 3;

    // Generate and print multiplication table for num1
    tables(arr, num1);

    // Generate and print multiplication table for num2
    tables(arr, num2);

    return 0;
}
