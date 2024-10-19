//Month number to the integer

#include <stdio.h>

main() 
{
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    switch (month) 
    {
        case 1:
          printf("This month has 31 days.\n");
            break;
        case 3:
         printf("This month has 31 days.\n");
            break;
        case 5:
         printf("This month has 31 days.\n");
            break;
        case 7:
         printf("This month has 31 days.\n");
            break;
        case 8:
         printf("This month has 31 days.\n");
            break;
        case 10:
         printf("This month has 31 days.\n");
            break;
        case 12:
         printf("This month has 31 days.\n");
            break;
        case 4:
         printf("This month has 30 days.\n");
            break;
        case 6:
         printf("This month has 30 days.\n");
            break;
        case 9:
         printf("This month has 30 days.\n");
            break;
        case 11:
         printf("This month has 30 days.\n");
            break;
        case 2:
         printf("This month has 28 or 29 days.\n");
            break;
        default:
         printf("Invalid month number.\n");
            break;
    }

 
}
