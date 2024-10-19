//Calculate person’s insurance premium based on salary
#include <stdio.h>

main() 
{
    float salary, premium;

    printf("Enter your annual salary: ");
    scanf("%f", &salary);

    if (salary <= 20000) {
        premium = salary * 0.05;
    } else if (salary <= 50000) {
        premium = salary * 0.07;
    } else if (salary <= 100000) {
        premium = salary * 0.10;
    } else {
        premium = salary * 0.15;
    }

    printf("Your insurance premium is: %.2f\n", premium);
}
