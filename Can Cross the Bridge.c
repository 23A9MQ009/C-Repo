#include <stdio.h>

int main() {
    int X, Y, Z;
    
    // Read the input values for mango weight (X), truck weight (Y), and bridge weight limit (Z)
    scanf("%d %d %d", &X, &Y, &Z);
    
    // Calculate the maximum number of mangoes that can be loaded
    int max_mangoes = (Z - Y) / X;
    
    // Print the maximum number of mangoes
    printf("%d\n", max_mangoes);
    
    return 0;
}
