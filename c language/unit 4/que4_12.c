#include <stdio.h>

// Function to find sum of first 50 natural numbers
int sumFirst50() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("Sum of first 50 natural numbers = %d\n", sumFirst50());
    return 0;
}
