// Swap two numbers, a&b.
#include <stdio.h> 

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 5, y = 10;
    swap(x, y);
    _swap(&x, &y);
    printf("x: %d, y: %d\n", x,y);
    return 0;
}
// call by refrence (used to return multiple values from one function )
void _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
}
