#include <stdio.h>
int main() {
    int A, B, number_of_attacks;
    scanf("%d %d", &A, &B);
    number_of_attacks = B / A;
    printf("%d\n", number_of_attacks);
    return 0;
}
