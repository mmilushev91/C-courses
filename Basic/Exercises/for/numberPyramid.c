#include <stdio.h>

int main() {
    int n, num = 1, whitespaces;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        whitespaces = n - i;
        
        for (int j = 0; j < n; j++)
        
        {
            if (whitespaces > 0)
            
            {
                printf(" ");
                whitespaces--;
            } 
            
            else 
            
            {
                printf("%d ", num);
                num++;
            }
        }
        
        printf("\n");
    }

    return 0;
}
