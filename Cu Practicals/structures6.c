#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

// Function ro modify emplpyee details
void updateEmployee(struct Employee *e, const char *newName, int newId, float newSalary)
{
    strcpy(e->name, newName);
    e->id = newId;
    e->salary = newSalary;
}

int main() {
    struct Employee emp;

    //Assign initial values
    strcpy(emp.name, "Nishi");
    emp.id = 101;
    emp.salary = 50000.0;

    // Print initial details
    printf("Before update\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", emp.name, emp.id, emp.salary);

    // Update employee details
    updateEmployee(&emp, "Nishika_Sharma", 102, 100000.0);

    // Print updated details
    printf("\nAfter update\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", emp.name, emp.id, emp.salary);

    return 0;
    // Note: The original struct Employee remains unchanged after the function call.
}
