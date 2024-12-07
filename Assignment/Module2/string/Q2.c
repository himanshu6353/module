//separate individual characters from a string.
#include <stdio.h>

main() 
{
    char str[10];  
	int i;
    
    printf("Enter a string: ");	//take string from user
    gets(str);  

    
    printf("individual characters in the string are:\n");
    for( i = 0; str[i] != '\0'; i++) {	//loop use for separate all characters
        printf("%c\n", str[i]);  
    }

    
}
