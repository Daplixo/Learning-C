/*Array as Function Arguement

// Function Declaration
void PrintNumbers (int arr[], int n)
or
void PrintNumbers (int *arr, int n)

//Function call
printNumbers(arr,n); */

#include <stdio.h>

void PrintNumbers (int arr[], int n);

int main () {
    int arr[] = {1,2,3,4,5,6};
    PrintNumbers(arr,6);

    return 0;
}

void PrintNumbers (int arr[], int n) {
    for(int i=0; i<n; i++){
        printf("%d\t ", arr[i]); 
    }
    printf("\n");

}
