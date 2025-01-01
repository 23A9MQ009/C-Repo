#include <stdio.h>
int main() {
    double CP, SP, loss, loss_percentage;
    scanf("%lf %lf", &CP, &SP);
    loss = CP - SP;
    loss_percentage = (loss / CP) * 100;
    printf("%.2f\n", loss_percentage);
    return 0;
}
