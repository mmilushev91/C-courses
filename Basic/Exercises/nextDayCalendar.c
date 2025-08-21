#include <stdio.h>

int main()
{
    int day, month, year, monthLimit;
    
    printf("Enter day: ");
    scanf("%d", &day);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    if (month == 2) {
        
        monthLimit = (year % 4 == 0 && 
            (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
  
    } else if (month > 0 && month <= 7) {
        
        monthLimit = month % 2 != 0 ? 31 : 30;
        
    } else if (month >= 8 && month <= 12) {
        monthLimit = month % 2 == 0 ? 31 : 30;
        
    } 
    
    day++;
    
    if (day > monthLimit) {
        day = 1;
        month++;
        
        if (month > 12) {
            month = 1;
            year++;
            
        } 
        
    } 
    
    printf("Day - %d, Month - %d, Year - %d", day, month, year);

    return 0;
}
