//count the total number of vowels or consonants in a
#include<stdio.h>


main() 
{
    char str[200];
    int i,vowels = 0, consonants = 0;

    printf("Enter a string: ");	////take string from user
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||		//loop for count vowels and consonants
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("Total Vowels: %d\n", vowels);	//print vowels
    printf("Total Consonants: %d\n", consonants);	//print consonants

    
}
