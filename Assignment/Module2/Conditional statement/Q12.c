//Program to find the maximum number among three numbers using ternary operator

#include <stdio.h>

main() 
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("Maximum number is %d\n", max);

   
}
