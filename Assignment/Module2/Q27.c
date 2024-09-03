#include <stdio.h>

main() 
{
    int days, months, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remainingDays = days % 30;

    printf("%d days is equal to %d months and %d days\n", days, months, remainingDays);

}
