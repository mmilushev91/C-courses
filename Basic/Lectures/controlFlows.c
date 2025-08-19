#include <stdio.h>

int main()
{
   int grade;
   
   printf("Enter grade: ");
   scanf("%d", &grade);
   
   if (grade >= 80) {
       printf("Excelent job!");
       
   } else if (grade >= 60) {
       printf("Not bad...");
       
   } else {
       printf("You failed!");
   }
    
    return 0;
}
