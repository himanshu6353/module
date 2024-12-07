//remove characters from a string except alphabets.
#include <stdio.h>

main() {
    char str[200], result[200];
    int i,j = 0;

    printf("Enter a string: ");	//take string from user
    gets(str);

    for( i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {	// loop for add all alphabets in one int
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing non-alphabet characters: %s\n", result);

    
}
