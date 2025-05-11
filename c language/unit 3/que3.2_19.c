#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }

    printf("Sum of digits: %d", sum);

    return 0;
}
