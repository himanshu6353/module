//find reverse of string using recursion
#include <stdio.h>

reverseString(char str[], int index) { //using recursion
  
    if (str[index] == '\0') {
        return; 
    }
    reverseString(str, index + 1);
    printf("%c", str[index]);
}

main() {
    char str[100]; 
    printf("Enter a string: ");
    gets(str); 					
    printf("Reversed string: ");
    reverseString(str, 0);   //print string
    printf("\n");

  
}


