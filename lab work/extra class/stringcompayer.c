#include<stdio.h>
main()
{
	char a[5],b[6];
	printf("Enter string 1::");
	gets(a);
	printf("Enter string 2::");
	gets(b);
	int result=strcmp(a,b);
	printf("Result is %d",result);
}
