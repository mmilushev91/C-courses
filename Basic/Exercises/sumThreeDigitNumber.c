#include <stdio.h>

int main()
{
    int threeDigitNumber, sum;
    
    printf("Enter three digit number: ");
    scanf("%d", &threeDigitNumber);
    
    sum = threeDigitNumber / 100 + (threeDigitNumber / 10) % 10 + threeDigitNumber % 10;
    printf("Sum is: %d", sum);
    
    
    return 0;
}
