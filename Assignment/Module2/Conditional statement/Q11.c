//Program to check whether a number is even or odd using ternary operator

#include <stdio.h>


main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf((num % 2 == 0) ? "The number is even.\n" : "The number is odd.\n");

}
