#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter b number: ");
    scanf("%d", &b);

    printf("Enter c number: ");
    scanf("%d", &c);

    // Check smallest
    if (a <= b && a <= c)
        printf("Smallest = %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest = %d\n", b);
    else
        printf("Smallest = %d\n", c);

    // Check greatest
    if (a >= b && a >= c)
        printf("Greatest = %d\n", a);
    else if (b >= a && b >= c)
        printf("Greatest = %d\n", b);
    else
        printf("Greatest = %d\n", c);

    return 0;
}
