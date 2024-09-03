#include <stdio.h>

main() 
{
    int choice, years, days;

    printf("Enter your choice:\n1. Convert years to days\n2. Convert days to years\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter number of years: ");
        scanf("%d", &years);

        days = years * 365; // assuming a non-leap year
        printf("%d years is equal to %d days\n", years, days);
    } else if (choice == 2) {
        printf("Enter number of days: ");
        scanf("%d", &days);

        years = days / 365; // assuming a non-leap year
        days = days % 365;
        printf("%d days is equal to %d years and %d days\n", days + (years * 365), years, days);
    } else {
        printf("Invalid choice\n");
    }

}
