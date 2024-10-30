// Write a function to calculate the sum, product and average of two numbers. 
// print the average in main function.
#include <stdio.h>

void dowork(int a, int b, int *sum, int *product, int *average);

int main() {
    int a = 3, b = 5;
    int sum, product, average;
    dowork(a, b, &sum, &product, &average);

    printf("Sum: %d, Product: %d, Average: %d", sum, product, average);

    return 0;
}

void dowork(int a, int b, int *sum, int *product, int *average) {
     *sum = a + b;
     *product = a * b;
     *average = (a+b) / 2;
}

/* **HomeWork Set** 
a. Write a program in C to find the maximum number 
between two numbers using a pointer. 
b. Write a program in C to print the elements of an
array in reverse order.
c. Write a program in C to print all the letters in
english alphabet using a pointer.*/