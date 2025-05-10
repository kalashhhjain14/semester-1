#include <stdio.h>

int main() {
    char name[50];

    printf("Enter student name: ");
    scanf("%s", name);  // use fgets if name includes spaces

    printf("Student name is: %s\n", name);
    return 0;
}
