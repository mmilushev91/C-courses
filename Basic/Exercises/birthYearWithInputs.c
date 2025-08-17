#include <stdio.h>

int main()
{
    int currentYear;
    scanf("%d", &currentYear);

    int age;
    scanf("%d", &age);

    int bornYear = currentYear - age;

    printf("They year you were born is: %d\n", bornYear);

    return 0;
}
