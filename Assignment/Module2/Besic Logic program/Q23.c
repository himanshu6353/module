#include <stdio.h>

main() 
{
    float num1, num2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Before swapping:\n");
    printf("Number 1: %.2f\n", num1);
    printf("Number 2: %.2f\n", num2);

    // Swap the numbers using multiplication and division
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("After swapping:\n");
    printf("Number 1: %.2f\n", num1);
    printf("Number 2: %.2f\n", num2);


}
