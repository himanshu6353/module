#include <stdio.h>

main() {
    int empno[5];         
    char empname[5][50];  
    char address[5][100]; 
    int age[5];          
    
    int i;

    for (i = 0; i < 5; i++) { 		//loop for take employee details
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &empno[i]);
        printf("Employee Name: ");
        scanf(" %[^\n]s", empname[i]); 
        printf("Address: ");
        scanf(" %[^\n]s", address[i]); 
        printf("Age: ");
        scanf("%d", &age[i]);
        printf("\n");
    }

    printf("Employee Details:\n");
    for (i = 0; i < 5; i++) {	//loop use for show employee details
        printf("Employee Number: %d\n", empno[i]);
        printf("Employee Name: %s\n", empname[i]);
        printf("Address: %s\n", address[i]);
        printf("Age: %d\n\n", age[i]);
    }

}

