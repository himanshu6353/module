#include <stdio.h>

main() {
    char students[5][50]; 
    int i;

    printf("Enter the names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf(" %[^\n]s", students[i]);
    }

    printf("\nList of Students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }

}

