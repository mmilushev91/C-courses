#include <stdio.h>

int main()
{
    //7 5 3
    int num1, num2, num3, max, min;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter third number: ");
    scanf("%d", &num3);
     
    max = num1;
    min = num2;
    
    if (num2 > max) {
        
        max = num2;
        min = num1;
    }
    
    if (num3 > max) {
        max = num3;
    }
    
    if (num3 < min) {
        min = num3;
    }
    
    printf("Max number is: %d\n", max);
    printf("Min number is: %d\n", min);
    
    return 0;
}
