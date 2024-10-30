#include <stdio.h>
#include <stdlib.h>

int main () {
    void *chunk;

    chunk = malloc (1024);

    // always test pointer allocation
    if ( chunk == NULL )
    {
        puts("Memory allocation failed!");
    } else {
        printf ("1024 bytes allocated at %p\n", chunk);
        free(chunk); // release the memory
    }

    return 0;  // indicates successful termination of the program
}