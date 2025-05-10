#include <stdio.h>

int main() {
    // Variable declaration
    int a = 10, b = 5, result;
    float f1 = 12.5, f2 = 2.5, float_result;
    int x = 0, y = 1;
    char ch = 'A';

    // 1) Arithmetic Operators (+, -, *, /, %)
    result = a + b;    // Addition
    printf("a + b = %d\n", result);
    result = a - b;    // Subtraction
    printf("a - b = %d\n", result);
    result = a * b;    // Multiplication
    printf("a * b = %d\n", result);
    float_result = f1 / f2; // Division
    printf("f1 / f2 = %.2f\n", float_result);
    result = a % b;    // Modulus
    printf("a %% b = %d\n", result);

    // 2) Relational Operators (==, !=, >, <, >=, <=)
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n", a <= b);  // Less than or equal to

    // 3) Logical Operators (&&, ||, !)
    printf("x && y: %d\n", x && y);  // Logical AND
    printf("x || y: %d\n", x || y);  // Logical OR
    printf("!x: %d\n", !x);          // Logical NOT

    // 4) Assignment Operators (=, +=, -=, *=, /=, %=)
    result = a;         // Simple assignment
    printf("result = a: %d\n", result);
    result += b;        // Add and assign
    printf("result += b: %d\n", result);
    result -= b;        // Subtract and assign
    printf("result -= b: %d\n", result);
    result *= b;        // Multiply and assign
    printf("result *= b: %d\n", result);
    result /= b;        // Divide and assign
    printf("result /= b: %d\n", result);
    result %= b;        // Modulus and assign
    printf("result %%= b: %d\n", result);

    // 5) Conditional Operator (?:)
    result = (a > b) ? a : b;  // if a > b, then result = a, else result = b
    printf("Biggest of a and b using ?: is: %d\n", result);

    // 6) Special/Miscellaneous Operators (sizeof, comma operator, & (address), * (dereference))
    printf("Size of int: %lu bytes\n", sizeof(int));   // sizeof operator
    printf("Size of float: %lu bytes\n", sizeof(float)); // sizeof operator

    // Comma operator
    result = (a = 20, b = 30, a + b);  // assigns 20 to a, 30 to b, and then calculates a + b
    printf("Result of comma operator: %d\n", result);

    // Address operator (&) and Dereference operator (*)
    printf("Address of a: %p\n", &a);  // Address of variable a
    printf("Value at address of a: %d\n", *(&a));  // Dereferencing the address of a

    // Character handling using ASCII value
    printf("Character corresponding to ASCII value of ch (%d) is: %c\n", ch, ch);

    return 0;
}
