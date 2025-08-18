#include <stdio.h>

int main()
{
    float a1, an, sum;
    int n;
    
    printf("Enter initial term: ");
    scanf("%f", &a1);
    
    printf("Enter n value: ");
    scanf("%d", &n);
    
    printf("Enter n-th Element: ");
    scanf("%f", &an);
    
    sum = (a1 + an) * n / 2;
    
    printf("The sum of the numbers from arithmetic sequence is: %f", sum);
    
    return 0;
}
