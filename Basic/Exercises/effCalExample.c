#include <stdio.h>
#include <math.h>

int main()
{
    int x, pow1, pow2, pow3, pow4;
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    pow1 = pow(x, 2);
    pow2 = pow(x, 4);
    pow3 = pow(x, 6);
    pow4 = pow(x, 8);
    
    printf("%d ** 2 = %d\n", x, pow1);
    printf("%d ** 4 = %d\n", x, pow2);
    printf("%d ** 6 = %d\n", x, pow3);
    printf("%d ** 8 = %d\n", x, pow4);
    
    return 0;
}
