#include <stdio.h>
#include <string.h>

main() {
    char str[100], smallest[100], largest[100];
    
    printf("Enter a sentence: "); 	//take string from user
    gets(str);
    sscanf(str, "%s", smallest);
    strcpy(largest, smallest);	//use copy libary
    char *token = strtok(str, " ");
    while (token) {				
        if (strlen(token) < strlen(smallest)) strcpy(smallest, token); //loop for add all small words in smallest
        if (strlen(token) > strlen(largest)) strcpy(largest, token);	//loop for add all largest words in largest
        token = strtok(NULL, " ");
    }
    printf("Smallest word: \"%s\"\n", smallest);
    printf("Largest word: \"%s\"\n", largest);
}

