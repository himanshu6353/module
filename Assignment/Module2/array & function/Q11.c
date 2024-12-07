#include <stdio.h>

main() {
    int numbers[5]; 
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {	//loop for user input
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);	//take value from user
    }
    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {	//reverse value
        printf("%d\n", numbers[i]);
    }


}

