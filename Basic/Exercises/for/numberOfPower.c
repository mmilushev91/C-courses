#include <stdio.h>

int main()
{
    int number, power, result = 1;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("Enter power: ");
    scanf("%d", &power);
    
    for (int i = 0; i < power; i++)
    
    {
        result *= number;
    }
    
    printf("Result is: %d\n", result);

    return 0;
}
