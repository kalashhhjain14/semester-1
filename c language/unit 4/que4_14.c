#include <stdio.h>
#define PI 3.14159

// Function to calculate area
float areaOfCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    printf("Area = %.2f\n", areaOfCircle(r));

    return 0;
}
