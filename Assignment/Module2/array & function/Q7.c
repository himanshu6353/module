#include <stdio.h>

main() {
    char str[100];
    int length = 0; 

    printf("Enter a string: "); 	//Take a string
    gets(str); 
    while (str[length] != '\0') {
        length++; 		//count length of array
    }

    
    printf("The length of the string is: %d\n", length); 


}

