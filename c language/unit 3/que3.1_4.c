#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter b number: ");
    scanf("%d", &b);

    switch(a > b) {
        case 1:
            printf("Maximum is: %d", a);
            break;
        case 0:
            printf("Maximum is: %d", b);
            break;
    }

    return 0;
}
