#include <stdio.h>

int main()
{
   float money;
   int grade;
   
   printf("Enter money: ");
   scanf("%f", &money);
   
   printf("Enter grade: ");
   scanf("%d", &grade);
   
   // && logical operator
   if (money < 50 && grade >= 80) {
       printf("You can receive money\n");
   }
  
    // || locigal operator
   if (money < 50 || grade >= 80) {
       printf("Your money are/are not less and your grade is not/is excelent\n");
   }
   
   // ! logical operator 
   if (!(money < 50)) {
       printf("You have enough money\n");
   }
  
    return 0;
}
