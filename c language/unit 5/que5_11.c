#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}, pos;

    printf("Enter position to delete (1 to 5): ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
