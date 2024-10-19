//find reverse of string using recursion
#include <stdio.h>

reverseString(char str[], int index) {
  
    if (str[index] == '\0') {
        return; 
    }
    reverseString(str, index + 1);
    printf("%c", str[index]);
}

main() {
    char str[100]; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    printf("Reversed string: ");
    reverseString(str, 0);
    printf("\n");

  
}


