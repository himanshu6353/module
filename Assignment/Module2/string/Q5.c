//compare two strings without using string library

#include <stdio.h>

main() 
{
    char str1[100], str2[100]; 
    int i, areEqual = 1; 

   
    printf("Enter the first string: ");		//take string from user
    gets(str1);

    
    printf("Enter the second string: ");	//take second string from user
    gets(str2); 

    
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) 	//loop for compare string
    {
        if(str1[i] != str2[i]) 
        { 
            areEqual = 0; 
            break; 
        }
    }

    
    if(areEqual) 	//check string are equal or not
    {
        printf("The two strings are equal.\n");
    } 
    else 
    {
        printf("The two strings are not equal.\n");
    }

    
}
