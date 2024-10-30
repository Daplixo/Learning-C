#include <stdio.h>

// Code for loops (printing numbers from 1 to 100 and skipping odd numbers.)
int main() {

    for(int a = 1; a <= 100; a++){
        if(a%2==1){
           continue;
            
        }
printf("%d\n", a);
    }
    return 0;
}