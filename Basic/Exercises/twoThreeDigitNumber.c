#include <stdio.h>

int main()
{
    int num, result;
    
    scanf("%d", &num);
    
    result = num / 100;
    
    if (result == 0) {
        printf("%d is two digit number", num);
        
    } else {
        printf("%d is three digit number", num);
    }
    
    return 0;
}
