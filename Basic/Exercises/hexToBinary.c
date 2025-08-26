#include <stdio.h>

int main()
{
    char character;
    char characterBinary[9];
    int index = 0;
    
    printf("Enter character: "); 
    scanf("%c", &character);
    
    int charDecimal;
    
    switch (character) {
        case 'A':
            charDecimal = 10;
            break;
        case 'B':
            charDecimal = 11;
            break;
        case 'C':
            charDecimal = 12;
            break;
        case 'D':
            charDecimal = 13;
            break;
        case 'E':
            charDecimal = 14;
            break;
        case 'F':
            charDecimal = 15;
            break;
        default:
            charDecimal = character;
            break;
        
    }
    
    while (charDecimal > 0 && index < 8) {
        characterBinary[index] = (char)(charDecimal % 2) +'0';
        
        charDecimal /= 2;
        
        index++;
    }
    
    characterBinary[index] = '\0'; // null terminate string
    
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", characterBinary[i]);
    }
    printf("\n");
    
    return 0;
}
