#include<stdio.h>
int main () {
    int i, j, k, n = 5;
    // Outer loo for rows
    for (i = 1; i<=n; i++) {
        // Inner loop for spaces
        for (j = i; j<n; j++) {
            printf(" ");
        }
        //Inner loop for printing numbers
        for (k = 1; k<=i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
    
}