#include <stdio.h>

// Function prototypes
void reverse(int arr[], int n); // Function to reverse the array
void printArray(int arr[], int n); // Function to print the array

int main() {
    // Initialize an array of integers
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // Call the reverse function to reverse the elements of the array
    reverse(arr, 11);

    // Call the print function to display the reversed array
    printArray(arr, 11);

    return 0; // Exit the program
}

// Function to print the elements of the array
void printArray(int arr[], int n) {
    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]); // Print each element followed by a tab
    }
    printf("\n"); // Print a newline after displaying the array
}

// Function to reverse the elements of the array
void reverse(int arr[], int n) {
    // Loop through the first half of the array
    for (int i = 0; i < n / 2; i++) {
        // Store the current element from the start of the array
        int firstVal = arr[i];
        // Store the corresponding element from the end of the array
        int secondVal = arr[n - i - 1];
        
        // Swap the elements
        arr[i] = secondVal; // Assign the second element to the first
        arr[n - i - 1] = firstVal; // Assign the first element to the second
    }
}

/* 
Explanation:
- The reason the loop runs until n/2 is to ensure that we only swap the elements in the first half of the array with those in the second half. 
- If we went until n, the array would be reversed twice, effectively undoing the reversal.
- The formula n - i - 1 is used because arrays in C start indexing from 0. This means for an array of size n, the last index is n-1. 
- By subtracting i from n-1, we ensure that we correctly access the mirrored element for swapping.
*/
