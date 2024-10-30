#include<stdio.h>

//Write a code to check if a student is egligible for scholarship.
int main () {
    float marks, Marksneeded;
    
    printf("Enter your marks: ");
    scanf("%f", &marks );

    Marksneeded = 90;

    // Compare user's marks with the marks needed for scholarship.
    if ( marks < 0 || marks > 100) {
        printf("Error! invalid value.\n");
        return 1 ; // end the code with one error
    }
    else if ( marks >= Marksneeded) {
        printf("Congratulations! you are egligible for the scholarship.\n");
    } else {
        printf("You are not egligible for the scholarship.\n");
    }

    return 0 ;

}