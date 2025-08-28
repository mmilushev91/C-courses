#include <stdio.h>

float findAverage(int grade1, int grade2, int grade3);

int main()
{
    int grade1, grade2, grade3;
    
    printf("Enter first grade: ");
    scanf("%d", &grade1);
    
    printf("Enter second grade: ");
    scanf("%d", &grade2);
    
    printf("Enter third grade: ");
    scanf("%d", &grade3);
    
    
    printf("Average is: %f", findAverage(grade1, grade2, grade3));
}

float findAverage(int grade1, int grade2, int grade3)

{
   
   return (grade1 + grade2 + grade3) / 3.0;
   
}
