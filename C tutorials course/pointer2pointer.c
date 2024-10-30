// Pointer to Pointer
// A variable that stores the memory address of another pointer

/*Pointer to Pointer 
Syntax 
int **pptr;
char **pptr;
float **pptr;
*/

#include <stdio.h>
// Print the value of 'i' for its pointer to pointer
int main () {
    int i =5 ;
    int *ptr = &i; // Pointer to 'i'
    int **pptr = &ptr; // Pointer to pointer to 'ptr'

    printf("%d\n", **pptr); // Print

    return 0;
    
}
// use * to print the value of variable
// use & to print the address of variable

