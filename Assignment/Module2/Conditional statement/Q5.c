#include <stdio.h>
main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a > 0) 
    {
        printf("%d is a positive number.\n", a);
    } 
    else if(a < 0) 
    {
        printf("%d is a negative number.\n", a);
    } 
    else 
    {
        printf("%d is zero.\n", a);
    }
}
