int main()
{
    int num, digit1, digit2, digit3;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;
    
    (digit1 < digit2 && digit2 < digit3) ? printf("ASCENDING") : printf("NOT ASCENDING");
   
    return 0;
}
