/*
C Langiage Pointer tools
- Operators
- Symbolic Constants

C Language Pointer Operators
- Unary *(pointer)
- Unary &(address-of)
- sizeof (a key word and also an operator)

C Language Symbolic Constants
- NULL, a pointer not assigned to any specfic address
- size_t, byte count

Examining a Variable
- Data Type -----> int size = 64;
- Name ---------------/       /
- Value ---------------------/
- &(address-of) 
- sizeof

*/

#include <stdio.h>

int main() {
    char a;
    // Initialize variables
    a = 'A';

    printf("Value of variable 'a': %c\n", a);
    printf("Address of variable 'a': %p\n", &a);
    printf("Size of variable 'a': %lu\n", sizeof(a)); // %lu means Long Unsigned Integer

    return 0;
}