//.Convert country’s name in abbreviate form
#include <stdio.h>

main()
{
    char countryName[100];
    printf("Enter the country's name: ");
    scanf("%99s", countryName);

    int i = 0;
    while (countryName[i] != '\0') {
        if (i == 0 || countryName[i-1] == ' ') {
            printf("%c", toupper(countryName[i]));
        }
        i++;
    }
}
