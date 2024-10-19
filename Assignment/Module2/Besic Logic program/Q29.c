#include <stdio.h>

main() 
 {
    int minutes, hours, seconds, remainingMinutes;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remainingMinutes = minutes % 60;
    seconds = remainingMinutes * 60;

    printf("%d minutes is equal to %d hours, %d minutes, and %d seconds\n", minutes, hours, remainingMinutes, seconds);

}
