#include <stdio.h>

main() 
{
    float salary, insurance, loan, remaining;

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    insurance = (salary * 10) / 100;
    loan = (salary * 10) / 100;

    remaining = salary - insurance - loan;

    printf("Insurance premium: %.2f\n", insurance);
    printf("Loan installment: %.2f\n", loan);
    printf("Remaining salary: %.2f\n", remaining);

}
