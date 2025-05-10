#include <stdio.h>

int main() {
    int length, width, perimeter;

    // Input length and width
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate perimeter
    perimeter = 2 * (length + width);

    // Display result
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}
