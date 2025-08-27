#include <stdio.h>

int main() {
    int num, evenNum = 0;
    
    printf("Enter n: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        evenNum += 2;
        printf("%d ", evenNum);
        
    }

    return 0;
}
