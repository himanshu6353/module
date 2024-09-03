//Calculate compound interest
#include <stdio.h>

main() 
{
    float principal, rate, time, amount, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in %): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    amount = principal;
	int i;
    for(i = 0; i < time; i++) {
        interest = (amount * rate) / 100;
        amount += interest;
    }

    printf("The compound interest is: %.2f\n", amount - principal);

    printf("The total amount after %f years is: %.2f\n", time, amount);

}
