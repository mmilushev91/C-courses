#include <stdio.h>

int main()
{
    int number, power;
    int counter = 0;
    int result;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("Enter power: ");
    scanf("%d", &power);
    
    result = 1;
    
    while (counter < power) 
    
    {
        result *= number;
        counter++;
    }
    
    printf("Result is: %d\n", result);

    return 0;
}
