#include <stdio.h>
// French or Indian

void namaste () ;
void bonjour () ;

int main () {
    printf("Enter f for French and i for Indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste () ;
    }else {
        bonjour () ;
    } 
    return 0;
}
 void namaste () {
    printf("Namaste\n");
 }

 void bonjour () {
    printf("Bonjour\n");
 }