#include <stdio.h>
#include <math.h>

int main()
{
    float distance, speed, travelTime, floatMinutes;
    
    int hours, minutes, seconds;
    printf("Enter distance in km: ");
    scanf("%f", &distance);
    
    printf("Enter speed in km/h: ");
    scanf("%f", &speed);
    
    travelTime = distance / speed;
    floatMinutes = travelTime * 60 - hours * 60;
    
    hours = travelTime;
    minutes = floatMinutes;
    
    seconds = round((floatMinutes - minutes) * 60);
    
    printf("Travel time: %d hours - %d minutes - %d seconds", hours, minutes, seconds);

    return 0;
}
