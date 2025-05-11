#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch((num > 0) - (num < 0)) {
        case 1: 
        printf("Positive number"); 
        break;

        case -1: 
        printf("Negative number"); 
        break;

        case 0: 
        printf("Zero"); 
        break;
    }

    return 0;
}
