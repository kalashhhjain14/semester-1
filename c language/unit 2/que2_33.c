#include <stdio.h>

int main() {
    int total_days, years, weeks, days;

    // Input: Number of days
    printf("Enter number of days: ");
    scanf("%d", &total_days);

    // Conversion
    years = total_days / 365;              // Calculate years
    total_days = total_days % 365;         // Remaining days after years

    weeks = total_days / 7;                // Calculate weeks
    days = total_days % 7;                 // Remaining days after weeks

    // Output: Display years, weeks, and days
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
