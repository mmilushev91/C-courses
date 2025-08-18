#include <stdio.h>

int main()
{
    float hourlyPay, salary;
    int totalHours;
    
    printf("Enter pay for an hour: ");
    scanf("%f", &hourlyPay);
    
    printf("Enter total work hours for a month: ");
    scanf("%d", &totalHours);
    
    salary = hourlyPay * totalHours;
    
    printf("%f", salary);
    
    return 0;
}
