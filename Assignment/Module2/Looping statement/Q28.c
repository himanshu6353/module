#include <stdio.h>

int main() {
    int n,i; 
    int term = 1; 


    printf("Enter the number of terms :: ");
    scanf("%d", &n);

    
    printf("%d ", term);

   
    for ( i = 1; i < n; i++) {
        if (i % 2 == 1) {
            term *= 2; 
        } else {
            term *= 3;
        }
        printf("%d ", term); 
    }

    printf("\n"); 
    return 0; 
}

