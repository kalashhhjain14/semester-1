#include <stdio.h>

// Function to check if a number is odd or even
void checkOddEven(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkOddEven(num);

    return 0;
}
