#include<stdio.h>

// code for making a simple calculator.
int main () {
    char operator;
    double num1, num2, result;

    // Input from user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2 );

    // Perform calculations based on the operator.
if (operator == '+') {
    result = num1 + num2;
} else if (operator == '-') {
    result = num1 - num2;
} else if ( operator == '*') {
    result = num1 * num2;
} else if ( operator == '/') {
    if (num2 != 0) {
        result = num1 / num2;

    }else {
        printf("Error! Divison by zero is not allowed.\n");
        return 1; //exit the program with an error code.
    }
} else {
    printf("Error! invalid operator.\n");
    return 1; // Exit the program with an error code.
}

// Output the results.
printf("Result: %2.lf\n", result);

return 0 ; // exit the program succesfully.
    

}