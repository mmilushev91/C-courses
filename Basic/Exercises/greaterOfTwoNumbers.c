#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("The greater number is: ");
    
    if (num1 > num2) {
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }

    return 0;
}
