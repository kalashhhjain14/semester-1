#include <stdio.h>

int main() {
    float length, width, side;
    float areaRectangle, areaSquare;

    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area of rectangle
    areaRectangle = length * width;

    // Input for square
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    // Calculate area of square
    areaSquare = side * side;

    // Display results
    printf("Area of the rectangle = %.2f\n", areaRectangle);
    printf("Area of the square = %.2f\n", areaSquare);

    return 0;
}
