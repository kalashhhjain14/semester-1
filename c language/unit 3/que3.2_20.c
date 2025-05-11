#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverseStr[100];
    int length, i, j, isPalindrome = 1;

    printf("Enter a string or number: ");
    scanf("%s", str);

    length = strlen(str);
    j = length - 1;

    // Reverse the string
    for (i = 0; i < length; i++) {
        reverseStr[i] = str[j];
        j--;
    }
    reverseStr[i] = '\0';  // Null terminate the reversed string

    // Check if the string is a palindrome
    for (i = 0; i < length; i++) {
        if (str[i] != reverseStr[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("It is a palindrome.");
    else
        printf("It is not a palindrome.");

    return 0;
}
