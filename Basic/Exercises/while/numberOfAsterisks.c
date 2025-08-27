#include <stdio.h>

int main()
{
    int numberOfAsterisks;
    int counter = 0;
    
    printf("Enter number of asterisks: ");
    scanf("%d", &numberOfAsterisks);
    
    while (counter < numberOfAsterisks) 
    
    {
        printf("*");
        counter++;
    }

    return 0;
}
