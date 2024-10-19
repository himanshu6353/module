//extract a substring from a given string
#include <stdio.h>
#include <string.h>

main() {
    char str[100];
    char substring[100];
    int start,length;
	printf("Enter string::");
	scanf("%s",&str);
	printf("Enter substring start point::");
	scanf("%d",&start);
	printf("Enter length of substring::");
	scanf("%d",&length);
    strncpy(substring, str + start, length);
    substring[length] = '\0';
    printf("Extracted substring: \"%s\"\n", substring);

}

