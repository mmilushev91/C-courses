#include <stdio.h>
#include <math.h>

int main()
{
    float floatNumber, decimalPart;
    
    int intNumber;
    
    printf("Enter a floating point number: ");
    scanf("%f", &floatNumber);
    
    intNumber = floatNumber;
    decimalPart = floatNumber - intNumber;
    
    printf("Decimal part is: %f", decimalPart);
    
    return 0;
}
