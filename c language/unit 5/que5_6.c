#include <stdio.h>

int main() {
    int arr[2][2][2];

    printf("Enter 8 elements for 2x2x2 array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    printf("3D Array elements are:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}
