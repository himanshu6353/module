#include <stdio.h>

main() {
    int numbers[5];
    int i, j, temp;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {	//take value in array
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5 - 1; i++) {	//loop for sorted in ascending order
        for (j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    printf("Sorted numbers in ascending order:\n");
    for (i = 0; i < 5; i++) {	//loop for show ascending number
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

