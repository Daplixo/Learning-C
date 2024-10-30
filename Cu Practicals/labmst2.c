// code to check if anumberis odd or even
#include <stdio.h>

int main (){
    int num;

    printf ("Enter a number: "); // take input from user
    scanf("%d",&num);

    if(num<=0) { // check if input id valid or not
        printf("Invalid Number!\n");
    } else if(num%2 == 0) { // check if input is divisible by 2
        printf ("Number is Even\n");
    }else { // print odd if input is not divisible by 2
        printf ("Number is Odd\n");
    }
    return 0; // end the function
}