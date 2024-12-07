#include <stdio.h>

main() {
    int numbers[5]; 
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {	//take number from user 
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nChecking if the entered numbers are even or odd:\n");
    for (i = 0; i < 5; i++) {	//check number 
        if (numbers[i] % 2 == 0) {
            printf("Number %d is even.\n", numbers[i]);	//if number is even
        } else {
            printf("Number %d is odd.\n", numbers[i]);	// if number is odd
        }
    }

}

