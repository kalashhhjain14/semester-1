#include <stdio.h>

int main() {
    char gender;
    float salary;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter salary: ");
    scanf("%f", &salary);

    if ((gender == 'M' || gender == 'm') && salary > 150000)
        printf("Salary is taxable");
    else if ((gender == 'F' || gender == 'f') && salary > 180000)
        printf("Salary is taxable");
    else
        printf("Salary is not taxable");

    return 0;
}
