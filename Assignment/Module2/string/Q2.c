//separate individual characters from a string.
#include <stdio.h>

main() 
{
    char str[10];  
	int i;
    
    printf("Enter a string: ");
    gets(str);  

    
    printf("individual characters in the string are:\n");
    for( i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);  
    }

    
}
