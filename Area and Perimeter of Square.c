#include <stdio.h>
int main() {
    int side, area, perimeter;
    scanf("%d", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("%d %d\n", area, perimeter);

    return 0;
}
