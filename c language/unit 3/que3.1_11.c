#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice){
        printf("Profit = %.2f", sellingPrice - costPrice);
    }
    else if (costPrice > sellingPrice){
        printf("Loss = %.2f", costPrice - sellingPrice);
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}
