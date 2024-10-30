#include <stdio.h>

int main () {
    char name[10];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! \n", name);

    char name1[] = "How are you?";
    printf("%s\n", name1);
}