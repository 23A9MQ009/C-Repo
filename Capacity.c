#include <stdio.h>
int main() {
    int T, S, B;
    long long total_capacity_in_bytes, total_capacity_in_kb;
    scanf("%d %d %d", &T, &S, &B);
    total_capacity_in_bytes = 2 * T * S * B * 512;
    total_capacity_in_kb = total_capacity_in_bytes / 1024;
    printf("%lld KB\n", total_capacity_in_kb);
    return 0;
}
