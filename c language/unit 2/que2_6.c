#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius
    celsius = (5.0 / 9) * (fahrenheit - 32);

    // Display result
    printf("Temperature in Celsius = %.2f°C\n", celsius);

    return 0;
}
