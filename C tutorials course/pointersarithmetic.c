/*
Pointers Arithmetic

Pointers can be incremented 
& decremented

Case 1
int age = 22;
int *ptr = &age;
ptr++;
*/
#include <stdio.h>

int main () {
    int age = 22;
    int *ptr = &age; 
    printf("ptr: %u\n", ptr);
    ptr++;
    printf("ptr: %u\n", ptr);
    ptr--;
    printf("ptr: %u\n", ptr); 
    return 0;
} 