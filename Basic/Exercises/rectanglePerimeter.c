#include <stdio.h>

int main()
{
    float sideA;
    float sideB;
    float perimeter;
    
    printf("Enter sideA: ");
    scanf("%f", &sideA);
    
    printf("Enter sideB: ");
    scanf("%f", &sideB);
    
    perimeter = 2 * sideA + 2 * sideB;
    
    printf("The are is: %.2f", perimeter);
    
    return 0;
}
