#include <stdio.h>

int main() {
    int asciiValue;

    // Input ASCII value
    printf("Enter ASCII value: ");
    scanf("%d", &asciiValue);

    // Print corresponding character
    printf("Character for ASCII value %d is '%c'\n", asciiValue, asciiValue);

    return 0;
}
