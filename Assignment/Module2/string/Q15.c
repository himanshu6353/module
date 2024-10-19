#include <stdio.h>
#include <string.h>

main() {
    char str[100], smallest[100], largest[100];
    
    printf("Enter a sentence: ");
    gets(str);
    sscanf(str, "%s", smallest);
    strcpy(largest, smallest);
    char *token = strtok(str, " ");
    while (token) {
        if (strlen(token) < strlen(smallest)) strcpy(smallest, token);
        if (strlen(token) > strlen(largest)) strcpy(largest, token);
        token = strtok(NULL, " ");
    }
    printf("Smallest word: \"%s\"\n", smallest);
    printf("Largest word: \"%s\"\n", largest);
}

