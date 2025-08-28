#include <stdio.h>

int findMaxNumber();

int main()
{
   printf("%d", findMaxNumber());
}

int findMaxNumber()

{
   int num1, num2, num3, max;
   
   printf("Enter first number: ");
   scanf("%d", &num1);
   
   printf("Enter second number: ");
   scanf("%d", &num2);
   
   printf("Enter third number: ");
   scanf("%d", &num3);
   
   max = num1;
   
   if (num2 > max)
   
   {
       max = num2;
   }
   
   if (num3 > max)
   
   {
       max = num3;
   }
   
   return max;
   
}
