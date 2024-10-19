//Switch case for vowel

#include <stdio.h>
main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a':
        printf("%c is a vowel.\n", ch);
            break;
        case 'A':
        printf("%c is a vowel.\n", ch);
            break;
        case 'e':
        printf("%c is a vowel.\n", ch);
            break;
        case 'E':
        printf("%c is a vowel.\n", ch);
            break;
        case 'i':
        printf("%c is a vowel.\n", ch);
            break;
        case 'I':
        printf("%c is a vowel.\n", ch);
            break;
        case 'o':
        printf("%c is a vowel.\n", ch);
            break;
        case 'O':
        printf("%c is a vowel.\n", ch);
            break;
        case 'u':
        printf("%c is a vowel.\n", ch);
            break;
        case 'U':
        printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input. Please enter an alphabet.\n");
            }
    }

   
}
