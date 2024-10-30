#include<stdio.h>

// Code for calculating grades of student.
int main () {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);
    if ( marks > 100 || marks < 0) {
        printf("Error! invalid input\n");
    }
    else if(marks >= 60 && marks <= 69) {
        printf("Your grade is D \n");
    } else if ( marks >= 70 && marks <= 79) {
        printf("Your grade is C\n");
    } else if ( marks >= 80 && marks <= 89) {
        printf("Your grade is B\n");
    } else if ( marks >= 90 && marks <= 100) {
        printf("Your grade is A\n");
    } 
    else {
        printf("You failed\n");
    }

    return 0 ;

}