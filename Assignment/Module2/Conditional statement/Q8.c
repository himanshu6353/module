//Arrange acc to height

#include <stdio.h>

main() 
{
    int height;
    printf("Enter the person's height in centimeters: ");
    scanf("%d", &height);

   
    if(height < 150) 
    {
        printf("The person is short.\n");
    } 
    else if(height >= 150 && height < 165) 
    {
        printf("The person is average height.\n");
    } 
    else if(height >= 165 && height < 180) 
    {
        printf("The person is tall.\n");
    } 
    else 
    {
        printf("The person is very tall.\n");
    }
}
