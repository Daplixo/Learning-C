#include <stdio.h>
#include <string.h>

// Function with structure arguements

struct student {
    char name [50];
    int age;
    float gpa;
};

// Function to print student details
void printStudent(struct student s) {
    printf ("Name: %s\nAge: %d\nGPA: %.1f\n", s.name, s.age, s.gpa);
}

int main () {
    struct student student1;

    // Assign values
    strcpy(student1.name, "Ayush");
    student1.age = 19;
    student1.gpa = 3.9;

    // Call the function to print student details
    printStudent(student1);

}