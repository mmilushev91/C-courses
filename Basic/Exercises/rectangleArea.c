#include <stdio.h>

int main()
{
    double height;
    double width;
    double area;

    scanf("%lf", &height);
    scanf("%lf", &width);

    area = height * width;

    printf("The rectangle are is: %.2lf\n", area);

    return 0;
}
