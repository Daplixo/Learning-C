// Wriet a function to convert celcius to fahrenheit.
// f = (c * 9/5 ) + 32 ( formula) 
#include <stdio.h>
float convertTemp (float celcius);

int main() {
    float far = convertTemp(37);
    printf("far : %f\n", far);

    return 0;
}

float convertTemp(float celcius) {
    float far = celcius * (9.0/5.0) + 32;
    return far;

}