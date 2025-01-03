#include <stdio.h>
int main() {
    float salary, HRA, DA, PF, gross_salary;
    scanf("%f%f%f",&salary,&HRA,&DA);
    PF = 0.12 * salary;
    gross_salary = salary + HRA + DA + PF;
    printf("%.2f\n", PF);
    printf("%.2f\n", gross_salary);
    return 0;
}
