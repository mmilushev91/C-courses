#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("%s", (num1 == num2) ? "EQUAL" : "NOT EQUAL");
    
    return 0;
}
