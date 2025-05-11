#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50}, pos, value;

    printf("Enter position to insert (1 to 6): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (int i = 5; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;

    printf("Array after insertion:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
