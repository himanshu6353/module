#include <stdio.h>

isPalindrome(int num) {
    int reversed = 0;
    int original = num;

   
    for (; num > 0; num /= 10) {		//check is number is palindrome or not
        int digit = num % 10; 
        reversed = reversed * 10 + digit; 
		}

    
    return original == reversed; 	//return number to main function
}

main() {
    int number;

    
    printf("Enter an integer: ");
    scanf("%d", &number);			//take a number

    
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

}

