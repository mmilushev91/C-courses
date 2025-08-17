#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    
    scanf("%lf", &celsius);
    
    fahrenheit = celsius * 1.8 + 32;
    
    printf("Temperature in Fahrenheit: %lf", fahrenheit);
    
    return 0;
}
