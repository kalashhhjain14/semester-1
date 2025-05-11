#include <stdio.h>

// Function to return minimum
int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Minimum = %d\n", minimum(x, y));

    return 0;
}
