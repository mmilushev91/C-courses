#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);
    
    if (x > 0)
    
        (y > 0) ? printf("Quadrant 1") : printf("Quadrant 4");
    
    else 
        (y > 0) ? printf("Quadrant 2") : printf("Quadrant 3");

    return 0;
}
