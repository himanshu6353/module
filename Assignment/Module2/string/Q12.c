//find the number of times a given word 'is' appears in the given string.
#include <stdio.h>

main() {
    char str[200], word[10];
    int count = 0, i, j, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++) 
    {
        if(str[i] == 'i' && str[i + 1] == 's' && (str[i + 2] == ' ' || str[i + 2] == '\0' || str[i + 2] == '\n')) 
        {
            if(i == 0 || str[i - 1] == ' ') 
            {
                count++;
            }
        }
    }

    printf("The word 'is' appears %d times.\n", count);

    
}
