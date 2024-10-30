#include <string.h>
#include <stdio.h>
 // Program fro array of structures
struct student {
    char name [50];
    int age;
    float gpa;
};

int main () {
    struct student student[3];

    // Input the details of the students
    for (int i = 0; i < 3; i++) {
        printf("Enter name of the student %d: ", i +1);
        scanf("%s", &student[i].name);
        printf("Enter age of the student %d: ", i +1);
        scanf("%d", &student[i].age);
        printf("Enter GPA of the student %d: ", i +1);
        scanf("%f", &student[i].gpa);
        printf("\n");
    }

    // Print the detailes of the students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", student[i].name, student[i].age, student[i].gpa);
    }

    return 0;
}