#include <stdio.h>

int main() {
    int age;
    float weight;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    if (age > 18 && age <= 55 && weight > 45)
        printf("Eligible to donate blood");
    else
        printf("Not eligible to donate blood");

    return 0;
}
