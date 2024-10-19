#include <stdio.h>
main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percent): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("The amount after %f years is: %.2f\n", time, amount);
    printf("The compound interest is: %.2f\n", compound_interest);

}
