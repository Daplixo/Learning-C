#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int *a, int n1, int *b, int n2, int **result, int *resultSize){
    *result = (int *) malloc((n1 + n2) * sizeof(int));

    if (*result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int k = 0;
    for (int i = 0; i < n1; i++) {
        (*result)[k++] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        (*result)[k++] = b[i]; 
    }

    *resultSize = n1 + n2;
}

int main () {
    int n1, n2;

    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    int *a = (int *) malloc(n1 * sizeof(int));
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements of second array: ");
    scanf("%d", &n2);
    int *b = (int *) malloc(n2 * sizeof(int));
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }

    int *result;
    int resultSize;

    mergeArrays(a, n1, b, n2, &result, &resultSize);

    printf("Merged Array: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }

    free(a);
    free(b);
    free(result);

    return 0;
}