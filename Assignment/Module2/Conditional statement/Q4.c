//conditional calculatop

#include <stdio.h>

main() 
{
    int a, b, choice;
    printf("Simple Calculator Program\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice:: ");
    scanf("%d", &choice);
    
    if(choice >= 1 && choice <= 5) 
    {
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
        
        switch(choice) 
        {
            case 1:
                printf("%d + %d = %d\n", a,b, a +b);
                break;
            case 2:
                printf("%d - %d = %d\n", a,b,a -b);
                break;
            case 3:
                printf("%d * %d = %d\n", a,b, a * b);
                break;
            case 4:
                if(b != 0)
                    printf("%d / %d = %f\n", a,b, (float)a /b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case 5:
                if(b != 0)
                    printf("%d %% %d = %d\n", a, b, a % b);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
        }
    } 
    else 
    {
        printf("Invalid choice. Please choose a number between 1 and 5.\n");
    }
    
}
