// Check if a leap year or not

#include <stdio.h>
main() 
{
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if (a % 4 == 0) 
    {
        if (a % 100 == 0) 
        
        {
            if (a % 400 == 0) 
            {
                printf("%d is a leap year.\n", a);
            } 
            else 
            {
                printf("%d is not a leap year.\n", a);
            }
        } 
        else 
        {
            printf("%d is a leap year.\n", a);
        }
    } 
    else 
    {
        printf("%d is not a leap year.\n", a);
    }

}
