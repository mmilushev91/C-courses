#include <stdio.h>

void printMinMax(int num1, int num2);

int main()
{
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    
    printMinMax(num1, num2);
    return 0;
}

void printMinMax(int num1, int num2)

{
    int min = num1;
    int max = num2;
    
    if (num1 > num2)
    
    {
        min = num2;
        max = num1;
    }
    
    printf("num1 = %d, num2 = %d --> Maximum = %d, Minimum = %d", num1, num2, max, min);
}
