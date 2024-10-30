// Binary search using recrusion

#include <stdio.h>

int binarySearchRecrusive(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
    

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller than mid, it can only be in the left sub array
        if (arr[mid] > target) {
            return binarySearchRecrusive(arr, left, mid - 1, target);
        }

        // else it can be in the right sub array
        return binarySearchRecrusive(arr, mid + 1, right, target);

    }

    // Target is not present in array
    return -1;

}

int main () {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearchRecrusive(arr, 0, n - 1, target);
    if (result == -1) {
        printf("Element not present in array");
    } else {
        printf("Element found at index %d", result);
    }

    return 0;
}