//combine two strings manually
#include <stdio.h>

main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    printf("Enter first string: ");	//take string from user
    gets(str1);

    printf("Enter second string: ");	//take second string from user
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++) //loop for add string in combined
    {
        combined[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; j++) //loop for add second string with first string 
    {
        combined[i + j] = str2[j];
    }
    
    combined[i + j] = '\0';

    printf("Combined string: %s", combined);

   
}
