//read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>

main() 
{
    char str[200];
    int i;

    printf("Enter a sentence: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Converted sentence: %s", str);

   
}
