#include <stdio.h>

int main()
{
    printf("Swap floating point numbers\n");
    
    float a, b;
    
    printf("Enter a floating point number: ");
    scanf("%f", &a);

    printf("Enter second floating point number: ");
    scanf("%f", &b);
    
    printf("Number a before swapping: %f\n", a);
    printf("Number b before swapping: %f\n", b);

    a = a + b;
    b = a - b; 
    a = a - b; 
    
    printf("Number a after swapping: %f\n", a);
    printf("Number b after swapping: %f\n", b);
    
    return 0;
}
