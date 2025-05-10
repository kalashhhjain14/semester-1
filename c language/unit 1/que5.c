#include <stdio.h>

int main() {
    int a, b, product;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Calculate multiplication
    product = a * b;

    // Display the result
    printf("The product of %d and %d is: %d\n", a, b, product);

    return 0;
}
