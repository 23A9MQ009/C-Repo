#include <stdio.h>
int main() {
    int total_seconds;
    int hours, minutes, seconds;
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600; 
    minutes = total_seconds / 60; 
    seconds = total_seconds % 60; 
    printf("H:M:S-%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
