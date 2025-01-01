#include <stdio.h>
int main() {
    double CP, SP, profit, profit_percentage;
    scanf("%lf %lf", &CP, &SP);
    profit = SP - CP;
    profit_percentage = (profit / CP) * 100;
    printf("%.2f\n", profit_percentage);
    return 0;
}
