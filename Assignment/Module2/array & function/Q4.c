#include <stdio.h>

factorial(int n) {
   
    if (n == 0) {
        return 1;
    } else {
     
        return n * factorial(n - 1);
    }
}

int main() {
    int number;


    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }
}

