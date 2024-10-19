//print individual characters of a string in reverse order
#include <stdio.h>
main() 
{
    char str[10];  
    int i,length = 0; 

    
    printf("Enter a string: ");
    gets(str);  

    
    for( i = 0; str[i] != '\0'; i++) 
    {
        length++;  
    }

    
    printf("The string in reverse order is:\n");
    for( i = length - 1; i >= 0; i--) 
    {
        printf("%c\n", str[i]);  
    }    

   
}
