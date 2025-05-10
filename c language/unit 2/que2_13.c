#include <stdio.h>

int main() {
    float a, b, result;

    printf("Enter a numbers: ");
    scanf("%f", &a);

    printf("Enter b numbers: ");
    scanf("%f", &b);

    result = a * b;

    printf("Multiplication = %.2f\n", result);

    return 0;
}
