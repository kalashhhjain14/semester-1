#include <stdio.h>

int main() {
    // Variable Declarations
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    // Displaying values based on operations
    printf("a + c = %d\n", a + c);                      // int + char (ASCII value of 'W')
    printf("x + c = %.5f\n", x + c);                    // float + char (ASCII value of 'W')
    printf("dx + x = %.7f\n", dx + x);                  // double + float
    printf("((int) dx) + ax = %d\n", (int)dx + ax);     // casting double to int and adding with long
    printf("a + x = %.5f\n", a + x);                    // int + float
    printf("s + b = %d\n", s + b);                      // short + int
    printf("ax + b = %ld\n", ax + b);                   // long + int
    printf("s + c = %d\n", s + c);                      // short + char (ASCII value of 'W')
    printf("ax + c = %ld\n", ax + c);                   // long + char (ASCII value of 'W')
    printf("ax + ux = %lu\n", ax + ux);                 // long + unsigned long

    return 0;
}
