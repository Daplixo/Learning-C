#include <stdio.h>

// Program for Simple calculator
void add (int num1, int num2);
void sub (int num1, int num2);
void div (int num1, int num2);
void mul (int num1, int num2);

int main () {
    double num1, num2;
    char operation;
    int i=1;
    while (i>0)
    {
 
    printf("Enter 1st number: ");
    scanf("%lf", &num1);

    printf("Enter Operator: ");
    scanf(" %c", &operation);

    printf("Enter 2nd number: ");
    scanf("%lf", &num2);
    
    
    if (operation == '+') {
        add (num1, num2) ;
    } else if (operation == '-') {
        sub (num1, num2) ;
    } else if (operation == '*') {
        mul (num1, num2) ;
    } else if (operation == '/') {
        div (num1, num2) ;
    } else {
        printf("Incorrect Operation");
    }
    }
    return 0;
}

void add (int num1, int num2) {
    double answer;
    answer = num1 + num2;
    printf("Answer is %lf\n", answer);
}
void sub (int num1, int num2) {
    double answer;
    answer = num1 - num2;
    printf("Answer is %lf\n", answer);
}
void mul (int num1, int num2) {
    double answer;
    answer = num1 * num2;
    printf("Answer is %lf\n", answer);
}
void div (int num1, int num2) {
    double answer;
    if (num2 != 0) {
        answer = num1 / num2;
        printf("Answer is %lf\n", answer);
    } else {
        printf("Error! division with 0 is not possible.");
    }
    
}