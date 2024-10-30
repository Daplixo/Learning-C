#include<stdio.h>

// Code for finding if an alphabet entered by the user is uppercase or not.
int main () {
    char character;

printf ("Enter a character: ");
scanf ("%c", &character);

if (character >= 'A' && character <= 'Z') {
    printf("Upper case");
} else if ( character >= 'a' && character <= 'z'){
    printf("Lower case");
} else {
    printf("Not an English alphabet");
}*

return 0;
}