#include <stdio.h>
main()
 {
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
	{
	
	int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: num1 = %d, num2 = %d\n", a, b);
	}
}
