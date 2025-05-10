#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, volume;

    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);
    return 0;
}
