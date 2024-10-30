/*Arrays are a collection of similiar data types
stored at contigiuous memory location*/
#include <stdio.h>

int main () {
    // Previously
   // int marks1 = 97;
    //int marks2 = 98;
    //int marks3 = 89;

    // Now using arrays
    int marks[3];
    printf("Enter Physics Marks :");
    scanf("%d", &marks[0]);
    printf("Enter Chemistry Marks :");
    scanf("%d", &marks[1]);
    printf("Enter Mathematics Marks :");
    scanf("%d", &marks[2]);

    printf("Physics Marks : %d, Chemistry Marks : %d, Mathematics Marks : %d", marks[0], marks[1], marks[2]);
    return 0;
}
// Here [3] means 0, 1, 2 not 0,1,2,3 if we try to store anything in [3]
// It will be a run time error