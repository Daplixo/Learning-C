#include <stdio.h>
// code for calculating Simple Interest.
int main () {
    int p, r, t, SI;

    printf("Enter Your Principal Amount: ");
    scanf("%d", &p);
    printf("Enter Your Rate of Interest: ");
    scanf("%d", &r);
    printf("Enter Your Time in Years: ");
    scanf("%d", &t);

    // Calculate with using formula (SI = (p*r*t)/100)
    SI = p*r*t/100;

    // Print the output
    printf("Your Simple Interest is: %d", SI);

    return 0;
}