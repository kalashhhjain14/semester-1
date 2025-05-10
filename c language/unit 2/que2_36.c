#include <stdio.h>

int main() {
    int distance;
    float fuel, average_consumption;

    // Accept input values
    printf("Input total distance in km: ");
    scanf("%d", &distance);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    // Calculate average consumption (km/lt)
    average_consumption = distance / fuel;

    // Display the average consumption with 3 decimal places
    printf("Average consumption (km/lt) %.3f\n", average_consumption);

    return 0;
}
