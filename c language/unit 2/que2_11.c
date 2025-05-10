#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter a numbers: ");
    scanf("%d",&a);

    printf("Enter b numbers: ");
    scanf("%d",&b);

    result = a - b;

    printf("Subtraction = %d", result);

    return 0;
}
