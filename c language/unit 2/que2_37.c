#include <stdio.h>

int main() {
    int amount;
    int notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    // Accept the amount from the user
    printf("Input the amount: ");
    scanf("%d", &amount);

    // Calculate the number of notes for each denomination
    notes_100 = amount / 100;
    amount = amount % 100;

    notes_50 = amount / 50;
    amount = amount % 50;

    notes_20 = amount / 20;
    amount = amount % 20;

    notes_10 = amount / 10;
    amount = amount % 10;

    notes_5 = amount / 5;
    amount = amount % 5;

    notes_2 = amount / 2;
    amount = amount % 2;

    notes_1 = amount;

    // Display the number of notes for each denomination
    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", notes_100);
    printf("%d Note(s) of 50.00\n", notes_50);
    printf("%d Note(s) of 20.00\n", notes_20);
    printf("%d Note(s) of 10.00\n", notes_10);
    printf("%d Note(s) of 5.00\n", notes_5);
    printf("%d Note(s) of 2.00\n", notes_2);
    printf("%d Note(s) of 1.00\n", notes_1);

    return 0;
}
