#include <stdio.h>

int main()
{
    double celsius, fahrenheit;
    
    printf("Enter temperature in Fahrenheit: ");
    
    scanf("%lf", &fahrenheit);
    
    celsius = (fahrenheit - 32) / 1.8;
    
    printf("Temperature in Celsius: %lf", celsius);
    
    return 0;
}
