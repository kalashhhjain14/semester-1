#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to consume any leftover newline

    printf("ASCII value of '%c' is %d\n", ch, ch);
    return 0;
}
