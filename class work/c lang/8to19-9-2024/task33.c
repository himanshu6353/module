#include<stdio.h>
main()
{
	char a[20],b[20];
	
	printf("Enter string : ");
	gets(a);
	printf("Enter string 2 : ");
	gets(b);
	
	printf("merge string is : %s",strcat(a,b));
	
}
