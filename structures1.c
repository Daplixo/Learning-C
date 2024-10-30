#include <stdio.h>
#include <string.h> 

struct book {
    char title[50];
    char author[50];
    float price;
};
 int main () {
    struct book Mybook;
    // Assign the values
    strcpy(Mybook.title, "My book");
    strcpy(Mybook.author, "Aashutosh Sharma");
    Mybook.price = 99.99;

    // Print the values
    printf("Title of the book: %s\n", Mybook.title);
    printf("Author of the book: %s\n", Mybook.author);
    printf("Price of the book: %.2f\n", Mybook.price);

    return 0;
 }