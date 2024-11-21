#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("The result as the sum of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result as the difference of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result as the product of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("The result as the quotient of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
