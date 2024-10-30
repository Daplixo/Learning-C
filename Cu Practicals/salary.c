// Program forcalculating income after 20 months if keeps getting double every month using for loop
#include <stdio.h>

int main () {
    double income;
    int time;
    printf("Enter Your initial income: ");
    scanf("%lf",&income);
    printf("Enter Time(in months): ");
    scanf("%d",&time);
    // start a for loop

    for (int i = 1; i <= time; i++) {
        income = income * 2;   
    }printf("Income after %d months: %.2lf\n", time, income);
    return 0;

}
 