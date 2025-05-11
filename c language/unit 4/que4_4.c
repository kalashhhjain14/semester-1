#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube = %d\n", cube(num));

    return 0;
}
