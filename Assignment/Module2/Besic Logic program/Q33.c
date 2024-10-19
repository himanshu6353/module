#include <stdio.h>

main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The first three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);

}
