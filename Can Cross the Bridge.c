#include <stdio.h>
int main() {
    int X, Y, Z, max_mangoes;
    scanf("%d %d %d", &X, &Y, &Z);
    max_mangoes = (Z - Y) / X;
    printf("%d\n", max_mangoes);
    return 0;
}
