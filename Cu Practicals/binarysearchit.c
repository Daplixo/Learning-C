// Binary search using iteration

#include <stdio.h>

int binarySearchIterative(int arr[], int size, int target){
    int left =0, right =size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mmid 
        if (arr[mid] == target)
        return mid;
        // if target is not greater, ignore the left half
        if (arr[mid] < target)
        left = mid + 1;
        //if target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
}

int main () {
    int arr[] = {2,3,4,10,40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearchIterative(arr, size, target);
    if (result == -1){
        printf("Element not found in array\n");
       
    } else {
            printf("Element found at index %d\n", result);
        }

    return 0;

}