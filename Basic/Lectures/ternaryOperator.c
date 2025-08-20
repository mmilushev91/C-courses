#include <stdio.h>

int main()
{
    int num1, num2, min;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    min = (num1 < num2) ? num1 : num2;
    
    printf("%d", min);

    return 0;
}
