#include <stdio.h>

int main()
{
    int seconds, leftSeconds, hours, minutes;
    
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    hours = seconds / 3600;
    minutes = (seconds / 60) % 60;
    leftSeconds = seconds % 60;
    
    hours < 10 ? printf("0%d:", hours) : printf("%d:", hours);
    minutes < 10 ? printf("0%d:", minutes) : printf("%d:", minutes);
    leftSeconds < 10 ? printf("0%d", leftSeconds) : printf("%d", leftSeconds);
    
    return 0;
}
