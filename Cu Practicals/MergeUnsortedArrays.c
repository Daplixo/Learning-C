#include <stdio.h>
#include <stdlib.h>

void mergeAndsort (int *a, int n1, int *b, int n2, int **result, int *resultSize){
    *result = (int *)malloc((n1 + n2) * sizeof(int));

    if (*result == NULL) {
        printf ("Memory allocation failed\n");
        exit(1);
    }

    // Copy elements of both arrays into result array
    for (int i = 0; i < n1; i++) {
        (*result)[i] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        (*result)[n1 + i] = b[i];
    }

    // Sort the merged array (simple bubble sort for practise)
    *resultSize = n1 + n2;
    for (int i = 0; i < *resultSize - 1; i++){
        for(int j = 0; j < *resultSize - i - 1; j++) {
            if ((*result)[j] > (*result)[j + 1]){
                int temp = (*result)[j];
                (*result)[j] = (*result) [j +1];
                (*result)[j + 1] = temp;
            }
        }
    }
}

int main () {
    int a[] = {3, 1, 7};
    int b[] = {4, 5, 2};

    int *result;
    int resultSize;

    mergeAndsort(a, 3, b, 3, &result, &resultSize);

    printf("Merged and sorted Array: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }

    free(result);
    return 0;  // Program execution completed successfully
}
