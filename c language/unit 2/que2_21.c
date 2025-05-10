#include <stdio.h>

int main() {
    float a, b, c, d, e, x;

    printf("Enter values of a: ");
    scanf("%f", &a);

    printf("Enter values of b: ");
    scanf("%f", &b);

    printf("Enter values of c: ");
    scanf("%f", &c);

    printf("Enter values of d: ");
    scanf("%f", &d);

    printf("Enter values of e: ");
    scanf("%f", &e);

    if ((d + e) != 0) {
        x = (a + b * c) / (d + e);
        printf("Result of expression x = %.2f\n", x);
    } else {
        printf("Denominator cannot be zero.\n");
    }

    return 0;
}
