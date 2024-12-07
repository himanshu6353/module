#include <stdio.h>

main() {
    int rows, cols;

    
    printf("Enter the number of rows: ");	//take number of rows from user
    scanf("%d", &rows);
    printf("Enter the number of columns: ");	//take number of colums from user
    scanf("%d", &cols);


    int i,j,matrix[rows][cols];

    
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {		// loop for take value from user
        for ( j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for ( i = 0; i < rows; i++) {		//loop for show in matrix form
        for ( j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}

