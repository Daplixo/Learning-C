/*
A POINTER IS
-> A variable that holds a memory location
-> The address of another variable
-> The address of a chunk of memory

BUT WHY?
-> C is a mid level language
-> Pointers provides access to memory locations
-> Pointers examine and manipulate memory

POINTER RULES
1. Pointer is declared as a specific data type.
- char a;
- char *ptr;

2. Pointer must be initialized before it is used.

POINTER'S DUAL NATURE

-> Use the asterisk operator to declare a pointer
- char *ptr;

The pointer variable is used with or without the asterisk operator
- ptr An address
- *ptr The value stored at the address
*/

#include <stdio.h>

int main () {
    char a;
    char *ptr;

    // initialize variables.

    a = 'A';
    printf("Value of variable 'a' is: %c\n",a);
    // Assign ptr to a's address.
    ptr = &a;
    printf("Address of variable 'a': %p\n", ptr);
    printf("Value of pointer 'ptr': %c\n", *ptr);

    return 0;
}