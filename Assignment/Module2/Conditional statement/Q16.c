// Temprature  declarer

#include <stdio.h>

main() 
{
    float temp;

    printf("Enter temperature in centigrade: ");
    scanf("%f", &temp);

    if (temp < 0) 
    {
        printf("Freezing weather\n");
    } 
    else if (temp >= 0 && temp <= 10) 
    {
        printf("Very Cold weather\n");
    } 
    else if (temp > 10 && temp <= 20) 
    {
        printf("Cold weather\n");
    } 
    else if (temp > 20 && temp <= 30) 
    {
        printf("Normal in Temp\n");
    } 
    else if (temp > 30 && temp <= 40) 
    {
        printf("Its Hot\n");
    } 
    else 
    {
        printf("Its Very Hot\n");
    }

    return 0;
}
