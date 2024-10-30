#include <stdio.h>
// Addition using functions
void addition (int num1, int num2) ;

int main () {
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    addition (num1, num2);

    return 0;
}

void addition (int num1,int num2) {
    int sum;
    sum = num1 + num2;
    printf("Sum is %d\n", sum);
}