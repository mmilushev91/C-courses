#include <stdio.h>

int main()
{
   int grade;
   
   do 
   
   {
       printf("Enter grade a legit grade (greater than 0 and less than 100: ");
       scanf("%d", &grade);
       
   } while (grade < 0 || grade > 100);
   
   printf("Thanks! You have inserted %d, which is a valid grade.\n", grade);

    return 0;
}
