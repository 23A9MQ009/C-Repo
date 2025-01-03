#include <stdio.h>
int main() {
    double b1, b2, h, area;
    scanf("%lf%lf%lf", &b1,&b2,&h); 
    area = 0.5 * (b1 + b2) * h;
    printf("%.4lf\n", area);
    return 0;
}
