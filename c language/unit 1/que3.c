#include <stdio.h>

int main() {
    int num1, num2, num3, sub;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Calculate the sum
    sub = num1 - num2 - num3;

    // Display the result
    printf("The sub of %d, %d, and %d is: %d\n", num1, num2, num3, sub);

    return 0;
}
