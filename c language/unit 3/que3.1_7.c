#include <stdio.h>

int main() {
    char op;
    float num1, num2;
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+': 
        printf("Result: %.2f", num1 + num2); break;

        case '-': 
        printf("Result: %.2f", num1 - num2); break;

        case '*': 
        printf("Result: %.2f", num1 * num2); break;

        case '/':
            if(num2 != 0)
                printf("Result: %.2f", num1 / num2);
            else
                printf("Division by zero error!");
            break;

        default: 
        printf("Invalid operator");
    }

    return 0;
}
