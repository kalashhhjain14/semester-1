#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;

    printf("Circumference = %.2f\n", circumference);
    return 0;
}
