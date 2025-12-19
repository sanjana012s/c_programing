#include<stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /, ): ");
    scanf(" %c", &operator);  // space important

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    if(operator == '+') {
        result = num1 + num2;
        printf("Sum is: %.2f\n", result);
    } 
    else if(operator == '-') {
        result = num1 - num2;
        printf("Subtraction is: %.2f\n", result);
    } 
    else if(operator == '*') {
        result = num1 * num2;
        printf("Multiplication is: %.2f\n", result);
    } 
    else if(operator == '/') {
        if(num2 != 0) {
            result = num1 / num2;
            printf("Division is: %.2f\n", result);
        } else {
            printf("Error: Division by zero!\n");
        }
    } 
    else if(operator == '%') {
        int n1 = (int)num1;
        int n2 = (int)num2;
        if(n2 != 0)
            printf("Modulo is: %d\n", n1 % n2);
        else
            printf("Error: Modulo by zero!\n");
    } 
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
