#include <stdio.h>
#include <ctype.h>
#include <string.h>
abbreviate(const char *fullName, char *abbreviation) {
    int i = 0, j = 0;
    while (fullName[i] != '\0') {
        if (isalpha(fullName[i]) && (i == 0 || fullName[i-1] == ' ')) {
            abbreviation[j++] = toupper(fullName[i]);
        }
        i++;
    }
    abbreviation[j] = '\0';
}
main() {
    char fullName[100];
    char abbreviation[50];
    printf("Enter the full name of the school: ");
    fgets(fullName, sizeof(fullName), stdin);
    size_t length = strlen(fullName);
    if (length > 0 && fullName[length - 1] == '\n') {
        fullName[length - 1] = '\0';
    }
    abbreviate(fullName, abbreviation);
    printf("Abbreviation: %s\n", abbreviation);
}

