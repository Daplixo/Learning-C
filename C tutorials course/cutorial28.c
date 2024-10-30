#include <stdio.h>

void calculatePrice(float value);

int main () {
    float value = 100.0;
    calculatePrice(value);
    printf("Value is : %f\n",value);
    

    return 0;
} 

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final price is : %f\n", value);
}// no matter what changes i make inside a function to a variable but it will reflect no change inside the main function.