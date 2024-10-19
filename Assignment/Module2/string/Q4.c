//count the total number of words in a string.
#include <stdio.h>

main() 
{
    char str[20];   
    int i, wordCount = 1;  

    
    printf("Enter a string: ");
    gets(str);  
    
    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') 
        {
            wordCount++;  
        }
    }

    
    printf("The total number of words is: %d\n", wordCount);

    
}
