#include <stdio.h>

int main()
{
    int number, sum = 0;
    
    printf("Enter number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= 10; i++)
    
    {   
      printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
