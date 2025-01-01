#include <stdio.h>
int main() {
    int speed_kmph;
    double speed_mps;
    scanf("%d", &speed_kmph);
    speed_mps = speed_kmph * 1000.0 / 3600.0;
    printf("%.2f\n", speed_mps);
    return 0;
}
