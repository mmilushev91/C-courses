#include <stdio.h>

int main()
{
    int num, result;
    
    printf("Enter number: ");
    scanf("%d", &num);
    if (num < 0) {
        num *= -1;
    }
    printf("%d", num);
    
    return 0;
}
