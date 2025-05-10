#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two floating point numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Multiply the numbers
    result = num1 * num2;

    // Display the result
    printf("Product = %.2f\n", result);

    return 0;
}
