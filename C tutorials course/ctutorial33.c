// Write a function to calculate Percentage of a student from Makrs in Science, Math & Sanskrit.
#include <stdio.h>
int calcPercentage(int science, int math, int sanskrit);

int main() {
    int science = 85;
    int math = 92;
    int sanskrit = 88;

    printf("Percentage is %d\n", calcPercentage(science, math, sanskrit));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit) {
    int totalMarks = science + math + sanskrit;
    int percentage = (totalMarks * 100.0) / (3 * 100);
    return percentage;
}