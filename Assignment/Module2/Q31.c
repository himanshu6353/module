#include <stdio.h>

main() 
{
    float kilometers, meters;

    printf("Enter number of kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("%f kilometers is equal to %f meters\n", kilometers, meters);

    
}
