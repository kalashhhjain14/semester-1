#include <stdio.h>

int main() {
    int original[5], copy[5];

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
        copy[i] = original[i];  // Copying
    }

    printf("Copied array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copy[i]);
    }

    return 0;
}
