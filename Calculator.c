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
                        result = num1 *num2;
                        break;
                case '/':
                        result = num1 / num2;
                        break;
                default:
                        printf("Invalid an operation\n");
                        result = -DBL_MAX;
        }

        if (result != -DBL_MAX)
                printf("Result: %.2lf", result);
        return 0;
}
