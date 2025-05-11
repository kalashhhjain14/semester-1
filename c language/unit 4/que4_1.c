#include <stdio.h>

// Function to calculate sum of three numbers
int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Sum = %d\n", sum(num1, num2, num3));

    return 0;
}
