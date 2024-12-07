#include <stdio.h>
#include <string.h>

main() {
    char str[100];  
    char reversed[100];  
    int len, i, isPalindrome = 1;

    printf("Enter a string: ");	//take a string
    gets(str);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);   
    for (i = 0; i < len; i++) {		// for loop for reversed string
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';

    for (i = 0; i < len; i++) { 	//check number is  palindrome or not
        if (str[i] != reversed[i]) {
            isPalindrome = 0; 
            break;
        }
    }   
    printf("Reversed string: %s\n", reversed);	//print reversed string
    if (isPalindrome) {							
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

