//find the length of a string without using library functions.
#include <stdio.h>

main() {
    char str[10];  
    int i,length = 0; 

    
    printf("Enter a string: ");
    gets(str);

    
    for( i = 0; str[i] != '\0'; i++) 
    {
        length++; 
    }

    printf("The length of the string is: %d\n", length);

    
}
