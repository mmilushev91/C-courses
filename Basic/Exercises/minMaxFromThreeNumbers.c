#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int min, max;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter second number: ");
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3) {
        max = num1;
        
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
        
    } else {
        max = num3;
    }
    
    if (num1 < num2 && num1 < num3) {
        min = num1;
        
    } else if (num2 < num1 && num2 < num3) {
        min = num2;
        
    } else {
        min = num3;
    }
    
    printf("The max number is: %d\n", max);
    printf("The min number is: %d\n", min);
    
    return 0;
}
