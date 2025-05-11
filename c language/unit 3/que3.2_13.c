#include <stdio.h>

int main() {
    int start, end, count = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            count++;
    }

    printf("Number of even numbers between %d and %d = %d", start, end, count);

    return 0;
}
