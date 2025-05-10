#include <stdio.h>

int main() {
    int a, b, remainder;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    // Calculate remainder
    remainder = a % b;

    // Display the result
    printf("The remainder when %d is divided by %d is: %d\n", a, b, remainder);

    return 0;
}
