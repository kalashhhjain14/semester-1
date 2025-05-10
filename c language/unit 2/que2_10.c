#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter a numbers: ");
    scanf("%d ", &a);

    printf("Enter b numbers: ");
    scanf("%d ", &b);

    printf("Enter c numbers: ");
    scanf("%d ", &c);

    sum = a + b + c;

    printf("Sum = %d", sum);

    return 0;
}
