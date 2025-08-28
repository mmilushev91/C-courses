int main()
{
    int num, evenDigitSum = 0, oddDigitSum = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    while (num > 0)
    
    {
        double dividedNum = num / 10.0;
        num /= 10;
        
        int digit = (dividedNum - num) * 10;
        
        if (digit % 2 == 0)
        
        {
            evenDigitSum += digit;
        }
        
        else 
        
        {
            oddDigitSum += digit;
        }
        
    }
    
    printf("Even digit sum: %d\n", evenDigitSum);
    printf("Odd digit sum: %d\n", oddDigitSum);

    return 0;
}
