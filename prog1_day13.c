Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Result = %d", a / b);
            }
            else {
                printf("Division by Zero Not Allowed");
            }
            break;

        case '%':
            if (b != 0) {
                printf("Result = %d", a % b);
            }
            else {
                printf("Modulo by Zero Not Allowed");
            }
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
