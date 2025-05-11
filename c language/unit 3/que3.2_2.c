#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter b number: ");
    scanf("%d", &b);

    if (a > b)
        printf("Maximum is: %d", a);
    else if (b > a)
        printf("Maximum is: %d", b);
    else
        printf("Both numbers are equal");

    return 0;
}
