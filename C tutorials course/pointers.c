#include <stdio.h>

int main () {
    int age = 22;
    int *ptr = &age;
    //address
    //printf("%p", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    return 0;
} // %p is a format specifier for the address
// %u is a format specifier for the unsigned int
/*Format speciffier syntax
printf ("%p", &age);
printf("%p", ptr);
printf("%p", &ptr);
* means value at pointer*/
