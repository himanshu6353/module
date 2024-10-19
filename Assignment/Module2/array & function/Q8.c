#include <stdio.h>
#include <string.h>

main() {
    char str[100];  
    char reversed[100];  
    int len, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);   
    for (i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';

    for (i = 0; i < len; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0; 
            break;
        }
    }   
    printf("Reversed string: %s\n", reversed);
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

