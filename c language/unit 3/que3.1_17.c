#include <stdio.h>

int main() {
    long long product = 1;
    for (int i = 1; i <= 10; i++) {
        product *= i;
    }
    printf("Product from 1 to 10 = %lld", product);
    return 0;
}
