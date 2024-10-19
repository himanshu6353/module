//count the total number of alphabets, digits and special characters in a string
#include <stdio.h>

main() 
{
    char str[200];
    int i,alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            alphabets++;
        } 
        else if(str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        } 
        else if((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)) 
        {
            specialChars++;
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", specialChars);

   
}
