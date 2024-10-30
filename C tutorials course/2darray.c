// Multidiemensional Arrays
/* 2D Arrays
int arr[][] = {{1,2}, {3,4}}; //Declare

// Access
arr[0][0]
arr[0][1]
arr[1][0]
arr[1][1]

A multi dimensional array is 
visualised in a for, of matrix
 */
#include <stdio.h>

int main () {
    // 2 x 3
    int marks [2] [3];//_ _ _ | _ _ _
    marks[0] [0] = 90;
    marks[0] [1] = 85;
    marks[0] [2] = 95;

    marks[1] [0] = 80;
    marks[1] [1] = 75;
    marks[1] [2] = 85;
    
    printf("%d marks\n", marks[0][0]);
    
return 0;
}