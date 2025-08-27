#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    
    {   
        if (i == 10)
        
        {
           printf("%d ", i); 
        }
        
        else 
        
        {
            printf("%d, ", i);
        }
        
    }
    
    printf("\n");
    
    for (int i = n; i > 0; i--)
    
    {   
        if (i == 1)
        
        {
           printf("%d ", i); 
        }
        
        else 
        
        {
            printf("%d, ", i);
        }
        
    }
    
    return 0;
}
