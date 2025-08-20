#include <stdio.h>

int main()
{
    int num, result;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num / 100 > 0 && num / 100 < 10) {
        printf("%d is three digit number", num);
        
    } else if (num / 10 > 0 && num / 10 < 10){
        printf("%d is two digit number", num);
        
    } else {
        printf("%d is neight two or three digit", num);
    }
    
    return 0;
}
