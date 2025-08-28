#include <stdio.h>

int main()
{
    int n, oddSum = 0, currentNum;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    
    {
        
        printf("Enter number: ");
        scanf("%d", &currentNum);
        
        if (currentNum % 2 != 0)
        
        {
            oddSum += currentNum;
        }
    }
    
    printf("Odd sum is %d", oddSum);
   
    return 0;
}
