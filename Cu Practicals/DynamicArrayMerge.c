#include <stdio.h>
#include <stdlib.h>

void mergeUnique(int *a, int n1, int *b, int n2, int **result, int *result_size) {
    // Allocate memory for the merged array Dynamically
    *result =(int *) malloc((n1 + n2) *sizeof(int));
    if (*result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int i = 0, j = 0, k = 0;

    // Merge the two arrays while excluding duplicates
    while (i < n1 && j < n2) {
        if (a[i] < b[j]){
            if (k == 0 || (*result)[k - 1] != a[i]){
                (*result) [k++] = a [i];
            }
            i++;
        }
        else if (a[i] > b[j]) {
            if (k == 0 || (*result)[k - 1] != a [i]){
                (*result)[k++] = b[j];
            }
            j++;
        }
        else {// a[i] == b[j]
        if (k == 0 || (*result)[k -1] != a[i]) {
            (*result)[k++] = a[i];
        }
        i++;
        j++;
        }
    }
    // Add remaining elements from the first array
    while (i < n1) {
        if (k == 0 || (*result)[k - 1] != a[i]) {
            (*result)[k++] = a[i];
        }
        i++;
    }
    // Add remaining elements from the second array
    while (j < n2) {
        if (k == 0 || (*result)[k - 1] != b[j]) {
            (*result) [k++] = b[j];
        }
        j++;
    }
    *result_size = k; // Store the size of the merged array
}

int main () {
    int n1, n2, *array1, *array2, *merged_array, merged_size;

    // Input for the first array
    printf("Enter the number of elements for the first array: \n");
    scanf("%d", &n1);
    array1 = (int *) malloc(n1 * sizeof(int));
    if ( array1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements for the first array (sorted): \n");
    for (int i = 0; i < n1; i++){
        scanf("%d", &array1[i]);
    }

    // Input for the second array
    printf("Enter the number of elements for second array: \n");
    scanf("%d", &n2);
    array2 = (int *) malloc (n2 * sizeof(int));
    if (array2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements for Second array(sorted): \n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Merge the arrays and store the unique elements
    mergeUnique(array1, n1, array2, n2, &merged_array, &merged_size);

    // Display the merged array
    printf("Merged Array with unique elements: \n");
    for(int i  = 0; i < merged_size; i++){
        printf("%d\t", merged_array[i]);
    }

    // Free dynamically allocated memory
    free(array1);
    free(array2);
    free(merged_array);

    return 0;
}