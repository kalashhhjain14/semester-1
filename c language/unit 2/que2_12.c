#include <stdio.h>

int main() {
    float a, b, c, result;

    printf("Enter a numbers: ");
    scanf("%f",&a);

     printf("Enter b numbers: ");
     scanf("%f",&b);

     printf("Enter c numbers: ");
     scanf("%f",&c);

    if (b != 0 && c != 0) {
        result = a / b / c;
        printf("Result of division = %.2f\n", result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
