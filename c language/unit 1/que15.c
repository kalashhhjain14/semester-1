#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if positive, negative, or zero
    if (number > 0) {
        printf("%d is Positive.\n", number);
    } else if (number < 0) {
        printf("%d is Negative.\n", number);
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
