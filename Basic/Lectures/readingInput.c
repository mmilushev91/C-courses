#include <stdio.h>

int main()
{
    int gradeI;
    scanf("%d", &gradeI); //scanf needs input data type and variable name for the input value to be stored
    //& shows that the value will go this variable name

    int gradeII;
    scanf("%d", &gradeII);

    int average = (gradeI + gradeII) / 2;

    printf("Average grade is: %d\n", average);
    return 0;
}
