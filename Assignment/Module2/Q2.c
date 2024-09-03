// program to make Simple calculator
#include <stdio.h>

main()
 {
    int num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the first operand: ");
    scanf("%d", &num1);

    printf("Enter the second operand: ");
    scanf("%d", &num2);

    if (operator == '+')
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    else if (operator == '-')
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    else if (operator == '*')
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    else if (operator == '/')
        if (num2 != 0)
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    else if (operator == '%')
        if (num2 != 0)
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    else
        printf("Error: Invalid operator.\n");
}
