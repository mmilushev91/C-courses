#include <stdio.h>

int main() {
    int years, days, answer;
    double money = 0.01; // Start with 1 cent

    printf("Would you rather have 1 million dollars right now or 1 cent which doubles its value every day for the rest of your life?\n");
    printf("Example of 1 cent which doubling every day\n");
    printf("Doubles every day calculator. Enter days: ");
    scanf("%d", &days);

    for (int i = 1; i <= days; i++) {
        money *= 2;
    }

    printf("For %d days you will get approximately $%.2lf\n", days, money);
    
    printf("Which option you would rather choose: 1: 1 million dollars right now or 2: 1 cent which doubles its value every day\n");
    scanf("%d", &answer);
    
    switch (answer) 
    
    {
        case 1:
            printf("You have chosen 1 million dollars right now!");
            break;
        case 2: 
            printf("You have chosen 1 cent which doubles its value every day for the rest of your life!\n");
            printf("Example of 1 cent which doubling every day\n");
            printf("For %d days you will get approximately $%.2lf\n", days, money);
            break;
    }
    
    return 0;
}
