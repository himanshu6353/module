//extract a substring from a given string
#include <stdio.h>
#include <string.h>

main() {
    char str[100];
    char substring[100];
    int start,length;
	printf("Enter string::");
	scanf("%s",&str);	//take string from user
	printf("Enter substring start point::");	//take start point from user
	scanf("%d",&start);
	printf("Enter length of substring::");	//take length of substring
	scanf("%d",&length);
    strncpy(substring, str + start, length); 	//find length using copy libery
    substring[length] = '\0';
    printf("Extracted substring: \"%s\"\n", substring);

}

