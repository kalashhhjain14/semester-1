#include <stdio.h>

int main() {
    char emp_id[11];  // Employee ID (Max 10 characters + null terminator)
    int hours_worked;
    float hourly_rate, salary;

    // Accept employee details
    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%s", emp_id);

    printf("Input the working hrs: ");
    scanf("%d", &hours_worked);

    printf("Salary amount/hr: ");
    scanf("%f", &hourly_rate);

    // Calculate salary
    salary = hours_worked * hourly_rate;

    // Display employee ID and salary
    printf("Employee ID = %s\n", emp_id);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
