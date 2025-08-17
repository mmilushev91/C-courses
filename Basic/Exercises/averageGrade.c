#include <stdio.h>

int main()
{
    int gradeI, gradeII, gradeIII;
    double averageGrade;
    
    printf("Enter first grade: ");
    scanf("%d", &gradeI);
    
    printf("Enter second grade: ");
    scanf("%d", &gradeII);
    
    printf("Enter third grade: ");
    scanf("%d", &gradeIII);
    
    averageGrade = (gradeI + gradeII + gradeIII) / 3.0;
    
    printf("Average grade is: %lf", averageGrade);
    
    return 0;
}
