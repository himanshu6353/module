#include <stdio.h>
main() {
    int numbers[5]; 
    int sum = 0;   
    int i;        

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {	//loop for take five number from user
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]); 
    }

    for (i = 0; i < 5; i++) {	//loop for sum all number of array
        sum += numbers[i];
    }

    printf("The sum of the entered numbers is: %d\n", sum);

}

