//practise question 39

#include <stdio.h>

void printAddress(int*n);

int main () {
    int n = 4;
    printAddress(&n);
    printf("address of n is %p\n", &n);
    return 0;
}
void printAddress(int *n) {
    printf("address of n in  %p\n", n);
}