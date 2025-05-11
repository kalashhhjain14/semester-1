#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch >= 'A' && ch <= 'Z') {
        case 1: 
        printf("Uppercase Alphabet"); 
        break;

        case 0:
            switch(ch >= 'a' && ch <= 'z') {
                case 1: 
                printf("Lowercase Alphabet"); break;

                default: 
                printf("Not an alphabet");
            }
    }

    return 0;
}
