#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit = %.2f°F\n", fahrenheit);

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Celsius = %.2f°C\n", celsius);

    return 0;
}
