
#include <stdio.h>

int main()
{
    char grade;
    
    printf("Enter grade (A-F): ");
    scanf("%c", &grade);
    
    switch (grade)
    
    {
        case 'A':
            printf("Your grade is between 90 and 100");
            break;
        case 'B':
            printf("Your grade is between 80 and 89");
            break;
        case 'C':
            printf("Your grade is between 70 and 79");
            break;
        case 'D':
            printf("Your grade is between 60 and 69");
            break;
        case 'F':
            printf("Your grade is bellow 60");
            break;
        default:
            printf("Invalid grade. Try again!");
    }
    
    return 0;
}
