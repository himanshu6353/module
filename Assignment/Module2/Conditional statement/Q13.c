//Program to find the minimum number among three numbers using ternary operator

#include <stdio.h>
main() 
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("Minimum number is %d\n", min);

}
