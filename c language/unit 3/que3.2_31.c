#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");  // Print leading spaces
        }
        for (int j = 1; j <= i; j++) {
            printf("1");  // Print 1
        }
        printf("\n");
    }

    return 0;
}
