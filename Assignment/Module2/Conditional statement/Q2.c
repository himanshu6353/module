// Program to display the sign of an integer

#include <stdio.h>
main()
{    
    int m;
    printf("Enter an integer: ");
    scanf("%d",&m);

    if (m>0) 
    {
        printf("The sign of %d is 1.\n", m);
    } 
    else if (m==0) 
    {
        printf("The sign of %d is 0.\n", m);
    } 
    else
    {
        printf("The sign of %d is -1.\n", m);
    } 
}
