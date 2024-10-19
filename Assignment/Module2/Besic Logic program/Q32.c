#include <stdio.h>

main() 
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    if (sum < 10) {
        printf("The sum is small (less than 10)\n");
    } else if (sum < 100) {
        printf("The sum is medium (between 10 and 100)\n");
    } else {
        printf("The sum is large (greater than or equal to 100)\n");
    }

    // Check the size of the sum in bytes
    printf("The size of the sum in bytes is: %zu\n", sizeof(sum));

}
