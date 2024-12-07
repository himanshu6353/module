//read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>

main() 
{
    char str[200];
    int i;

    printf("Enter a sentence: ");	//take string from user
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] >= 'a' && str[i] <= 'z') 		//loop for replace lowercase with uppercase
        {
            str[i] = str[i] - 32;
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z') 	//loop for replace uppercase with lowercase
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Converted sentence: %s", str);

   
}
