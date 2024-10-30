// Write functions to calculate area of square, a circle & a rectangle
#include <stdio.h>
#include <math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main () {
    float a = 5.0;
    float b = 10.0;
    printf("Area of rectangle is : %f\n", rectangleArea(a, b));
    float side = 7.0;
    printf("Area of square is : %f\n", squareArea(side));
    float rad = 9.56;
    printf("Area of circle is : %f\n", circleArea(rad));
  
    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}