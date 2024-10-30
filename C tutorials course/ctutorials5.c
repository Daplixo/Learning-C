#include<stdio.h>

// Using conditional statements.
int main () {
    int age;
// Enter a number for age.
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 18) {
        // Print an output if age is greater than 18.
        printf("They are an adult. \n");
        printf("They can vote. \n");
    }
    else {
        // Print an output if age is less than 18.
        printf("They are not an adult. \n");
        printf("They can not vote. \n");
    }

    return 0 ;
}