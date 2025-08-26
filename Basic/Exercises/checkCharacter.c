
#include <stdio.h>

int main()
{
    char character;
    
    printf("Enter character: ");
    scanf("%c", &character);
    
    int characterAscii = character;
    
    if (characterAscii >= 97 && characterAscii <= 122) {
        printf("Lower case!");
        
    } else if (characterAscii >= 65 && characterAscii <= 90) {
        printf("Upper case!");
    
    } else if (characterAscii >= 48 && characterAscii <= 57) {
        printf("Digit");
        
    } else {
        printf("Other");
    }
    
    return 0;
}
