/* Practise Qs 43
int arr[] = {1,2,3,4,5}

for the given array, what will the following give?

a. *(arr+2)

b. *(arr+5)
*/

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};

    printf("a. %d\n", *(arr+2)); // prints 3
    printf("b. %d\n", *(arr+5)); // prints an error (out of bounds)

    return 0;
}
