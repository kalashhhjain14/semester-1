#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, average;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    // Calculate average
    average = (n1 + n2 + n3 + n4 + n5) / 5;

    // Display result
    printf("Average = %.2f\n", average);

    return 0;
}
