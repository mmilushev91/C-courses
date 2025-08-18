#include <stdio.h>

int main()
{
    float a1, d, an;
    int n;
    
    printf("Enter initial term: ");
    scanf("%f", &a1);
    
    printf("Enter n value: ");
    scanf("%d", &n);
    
    printf("Enter difference: ");
    scanf("%f", &d);
    
    an = a1 + (n - 1) * d;
    
    printf("The n-th element of the arithmetic sequence is: %f", an);
    
    return 0;
}
