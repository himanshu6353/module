#include<stdio.h>
main()
{
	//strcpy for copy string
	char a[10],b[10];
	
	printf("Enter Name::");
	gets(a);
	strcpy(b,a);
	printf("copy string is::%s",b);
}
