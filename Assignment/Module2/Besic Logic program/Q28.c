#include <stdio.h>

main()
 {
    int years, days, months, remainingDays;

    printf("Enter number of years: ");
    scanf("%d", &years);

    days = years * 365; // assuming a non-leap year
    months = days / 30;
    remainingDays = days % 30;

    printf("%d years is equal to %d months and %d days\n", years, months, remainingDays);

}
