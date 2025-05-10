#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Calculate the sum
    sum = num1 + num2 + num3;

    // Display the result
    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);

    return 0;
}
