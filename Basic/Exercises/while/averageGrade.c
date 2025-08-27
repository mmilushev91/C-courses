#include <stdio.h>

int main()
{
    float grade, sumGrades, averageGrade;
    int counter = 0;
    
    printf("Enter grade/-1(if previous was the last grade): ");
    scanf("%f", &grade);
    
    while (grade != -1) 
    
    {
        sumGrades += grade;
        counter++;
        
        printf("Enter grade/-1(if previous was the last grade): ");
        scanf("%f", &grade);
    }
    
    averageGrade = sumGrades / counter;
    
    printf("The average grade is: %.2f", averageGrade);

    return 0;
}
