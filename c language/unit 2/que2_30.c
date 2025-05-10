#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter b number: ");
    scanf("%d", &b);

    // Find the biggest number using conditional operator
    int biggest = (a > b) ? a : b;
    printf("The biggest number is: %d\n", biggest);

    // Find the smallest number using conditional operator
    int smallest = (a < b) ? a : b;
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
