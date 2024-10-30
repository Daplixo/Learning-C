#include <stdio.h>
#include <string.h> // Include string header file for string manipulation

// Define a structure named 'student'
struct student{
    char name[50]; // Array to store the name of the student
    int age;       // Integer to store the aeg of the student
    float gpa;     // Float to store the GPA (Grade Point Average)
};


int main() {
    // Declare a variable of type 'student'
    struct student student1; // Creates an instance of student structure
    struct student student2; // Creates a new instance of student structure

    // Assign values to the membersof the structure
    strcpy(student1.name, "Saman"); // Copy the string "Saman" into the name member
    student1.age = 18; // Set the age number to 18
    student1.gpa = 4.2; // Set the GPA to 4.2

    // Repeat the process for student2
    strcpy(student2.name, "Arjun");
    student2.age = 19;
    student2.gpa = 3.8;

    // Print the values of the structure members
    printf("Student 1 Name: %s\n", student1.name);
    printf("Student 1 Age: %d\n", student1.age);
    printf("Student 1 GPA: %.1f\n", student1.gpa);

    // Print the value for seconf student
    printf("\n"); // For adding space between data members
    printf("Student 2 Name: %s\n", student2.name);
    printf("Student 2 Age: %d\n", student2.age);

    printf("Student 2 GPA: %.1f\n", student2.gpa);

    return 0; // Exit the program

}

