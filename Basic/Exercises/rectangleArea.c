#include <stdio.h>

int main()
{
    double height;
    double width;
    double area;
    
    printf("Enter height: ");
    scanf("%lf", &height);
    
    printf("Enter width: ");
    scanf("%lf", &width);
    
    area = height * width;
    
    printf("The are is: %.2lf", area);
    

    return 0;
}
