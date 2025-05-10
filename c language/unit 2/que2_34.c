#include <stdio.h>

int main() {
    float weight1, weight2, item1_count, item2_count;
    float average;

    // Accept input values
    printf("Enter weight of Item1: ");
    scanf("%f", &weight1);
    printf("Enter number of Item1: ");
    scanf("%f", &item1_count);

    printf("Enter weight of Item2: ");
    scanf("%f", &weight2);
    printf("Enter number of Item2: ");
    scanf("%f", &item2_count);

    // Calculate average value
    average = ((weight1 * item1_count) + (weight2 * item2_count)) / (item1_count + item2_count);

    // Display the average value
    printf("Average Value = %.6f\n", average);  // Display with 6 decimal places

    return 0;
}
