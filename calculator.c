#include <stdio.h>
#include <float.h>

int main() {
        char operation;
        double num1, num2, result;

        printf("Enter an operation (+, -, *, /): ");
        scanf(" %c", &operation);

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);
                                                   if (operation == '+')
                result = num1 + num2;
        else if (operation == '-')
                result = num1 - num2;
        else if (operation == '*')
                result = num1 * num2;
        else if (operation == '/')
                result = num1 / num2;
        else {
                printf("Invalid an operation\n");
                result = -DBL_MAX;
        }

        if (result != -DBL_MAX)
                printf("Result: %.2lf", result);
        return 0;
}
