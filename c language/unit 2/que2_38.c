#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    // Accept the input in seconds
    printf("Input seconds: ");
    scanf("%d", &seconds);

    // Convert seconds to hours, minutes, and remaining seconds
    hours = seconds / 3600;               // 1 hour = 3600 seconds
    seconds = seconds % 3600;             // Remaining seconds after calculating hours

    minutes = seconds / 60;               // 1 minute = 60 seconds
    seconds = seconds % 60;               // Remaining seconds after calculating minutes

    // Display the result in H:M:S format
    printf("There are:\nH:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
