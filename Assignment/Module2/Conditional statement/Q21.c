// Gross salary counter


#include <stdio.h>

main() 
{
    float basic_salary, hra, da, gross_salary;

    printf ("Enter basic salary of an employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) 
    {
        hra = (basic_salary * 20) / 100;
        da = (basic_salary * 80) / 100;
    } 
    else if (basic_salary <= 20000) 
    {
        hra = (basic_salary * 25) / 100;
        da = (basic_salary * 90) / 100;
    } 
    else 
    {
        hra = (basic_salary * 30) / 100;
        da = (basic_salary * 95) / 100;
    }

    gross_salary = basic_salary + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f\n", gross_salary);

    
}
