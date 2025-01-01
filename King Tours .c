#include <stdio.h>
int main() {
    int N, M, max_people;
    scanf("%d %d", &N, &M);
    max_people = (N * 5) + (M * 7);
    printf("%d\n", max_people);

    return 0;
}
