#include <stdio.h>

// Function to calculate multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function to calculate division
float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else
        printf("Division by zero is not allowed.\n");
        return 0;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Multiplication = %d\n", multiply(num1, num2));
    printf("Division = %.2f\n", divide(num1, num2));

    return 0;
}
