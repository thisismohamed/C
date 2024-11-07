#include <stdio.h>
#include <float.h>

int main() {
        char operation;
        double num1, num2, result;

        printf("Enter an operation (+, -, *, /): ");
        scanf(" %c", &operation);

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operation) {
                case '+':
                        result = num1 + num2;
                        break;
                case '-':
                        result = num1 - num2;
                        break;
                case '*':
                        result = num1 * num2;
                        break;
                case '/':
                        if (num2 != 0) {
                                result = num1 / num2;
                        } else {
                                printf("Cannot divide by zero");
                        }
                        break;
                default:
                        printf("Invalid an operation");
                        return 1;
        }

        printf("Result: %.2lf", result);
        return 0;
}
