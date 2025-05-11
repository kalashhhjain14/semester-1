#include <stdio.h>

int main() {
    int arr[5], sum = 0;
    float avg;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;

    printf("Average = %.2f\n", avg);

    return 0;
}
