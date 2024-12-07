//find the length of a string without using library functions.
#include <stdio.h>

main() {
    char str[10];  
    int i,length = 0; 

    
    printf("Enter a string: ");	//take string from user
    gets(str);

    
    for( i = 0; str[i] != '\0'; i++) //loop for count length of string
    {
        length++; 
    }

    printf("The length of the string is: %d\n", length);	//show length of string

    
}
