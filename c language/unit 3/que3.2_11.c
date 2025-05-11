#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 80)
        printf("Grade: A");
    else if (percentage >= 70)
        printf("Grade: B");
    else if (percentage >= 60)
        printf("Grade: C");
    else if (percentage >= 50)
        printf("Grade: D");
    else if (percentage >= 35)
        printf("Grade: E");
    else
        printf("Fail");

    return 0;
}
