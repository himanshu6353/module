//find the maximum number of characters in a string.
#include <stdio.h>


main() {
    char str[200];
    int i,length = 0;

    printf("Enter a string: ");	//take string from user
    gets(str);

    for( i = 0; str[i] != '\0'; i++) {	//loop for find maximum number of string
        length++;
    }

    printf("The total number of characters is: %d\n", length);


}
