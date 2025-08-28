#include <stdio.h>

float findAverage(int grade1, int grade2, int grade3);

int main()
{
   printf("Average is: %f", findAverage(4, 3, 9));
}

float findAverage(int grade1, int grade2, int grade3)

{
   
   return (grade1 + grade2 + grade3) / 3.0;
   
}
