#include <stdio.h>

int main() {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the first operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+': // Addition
            result = num1 + num2;
            break;
        case '-': // Subtraction
            result = num1 - num2;
            break;
        case '*': // Multiplication
            result = num1 * num2;
            break;
        case '/': // Division
            if(num2 == 0) {
                printf("You can't divide by zero\n");
                break;
            } else {
                result = num1 / num2;
                break;
            }
        default:
            printf("Invalid operator\n");
    }

    printf("Result: %.4lf", result);

    return 0;
}