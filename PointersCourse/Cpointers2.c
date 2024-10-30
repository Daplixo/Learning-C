#include <stdio.h> 

int main () {
    int age;
    int *Age;
    
    printf("Enter your age: ");
    scanf("%d",Age);
    
    printf("Your age is: %d\n", *Age);
    return 0;
}