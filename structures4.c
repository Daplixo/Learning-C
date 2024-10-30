// Program for structure with nested structures
#include <string.h>
#include <stdio.h>

struct Address {
    char street[100];
    char city[50];
    int zip;
};

struct Person {
    char name[50];
    int age;
    struct Address address; // Nested structure
};

int main() {
    struct Person person;

    // Input person details
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);

    // Input Address details
    printf("Enter street: ");
    scanf("%s",person.address.street);
    printf("Enter city: ");
    scanf("%s",person.address.city);
    printf("Enter zip: ");
    scanf("%d", &person.address.zip);

    // Print all the information
    printf("\nPerson Information\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s, %d\n", person.address.street, person.address.city,person.address.zip);


    return 0;
}