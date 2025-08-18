#include <stdio.h>

int main()
{
    int threeDigitNumber, sum, first, second, third;
    
    printf("Enter three digit number: ");
    scanf("%d", &threeDigitNumber);
    
    first = threeDigitNumber / 100;
    second = (threeDigitNumber / 10) % 10;
    third = threeDigitNumber % 10;
    
    printf("Reversed number is: %d%d%d", third, second, first);
    
    return 0;
}
