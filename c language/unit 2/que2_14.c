#include <stdio.h>

int main() {
    float length, width, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);

     printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
