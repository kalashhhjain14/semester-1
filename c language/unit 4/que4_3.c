#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square = %d\n", square(num));

    return 0;
}
