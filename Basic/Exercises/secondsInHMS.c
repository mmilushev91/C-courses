#include <stdio.h>

int main()
{
    int inputSeconds, hours, minutes, seconds;
    
    printf("Enter seconds: ");
    scanf("%d", &inputSeconds);
    
    hours = inputSeconds / 3600;
    minutes = inputSeconds / 60 - hours * 60;
    seconds = inputSeconds - (hours * 3600 + minutes * 60);
    
    printf("%d hours - %d minutes - %d seconds", hours, minutes, seconds);

    return 0;
}
