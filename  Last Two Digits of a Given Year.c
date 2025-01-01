#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    int last_two_digits = year % 100;
    printf("%02d\n", last_two_digits);
    return 0;
}
