#include <stdio.h>
// Code for finding out the largest variable.

int main () {
    int a, b, c;
    int largest;

    // input three numbers
    printf("enter three numbers: ");
    scanf ("%d %d %d" , &a, &b, &c);

    // use logical operators to find the largest number
    if (a >= b && a >= c) {
        largest + a;
    }
else if (b >= a && b >= c) {
    largest = b;
}
    else {
        largest = c;
    }


// output the result 
printf("the largest number is: %d\n", largest);

return 0;
   
}