#include <stdio.h>

int main()
{
    float num1, num2, result;
    char operation;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Operation (+|-|*|/%%): ");
    scanf("%c", &operation);
    
    printf("Enter second number: ");
    scanf("%f", &num2);    
    
    if (num2 == 0 && operation == '/' || operation == '%') {
        printf("Cannot divide by 0\n");
        return 1;
    }
    
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
            result = num1 / num2;
            break;
        
        case '%':
            result = (int) num1 % (int) num2;
            break;
        
        default:
            printf("Invalid operation!\n");
            return 1;
    }
    
    printf("Result is: %f", result);

    return 0;
}
