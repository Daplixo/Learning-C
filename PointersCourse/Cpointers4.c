#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;

    fp = fopen("Cpointers5.c", "r");
    if (fp == NULL) {
        printf("Could not open file.");
        exit(1);
    }
    puts("File opened!");
}