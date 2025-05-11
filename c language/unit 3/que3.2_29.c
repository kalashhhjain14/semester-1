#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");  // Print leading spaces
        }
        for (int j = 0; j < n - i; j++) {
            printf("%c", 'A' + i);  // Print the same letter in each row
        }
        printf("\n");
    }

    return 0;
}
