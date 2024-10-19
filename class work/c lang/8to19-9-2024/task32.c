#include<stdio.h>
main()
{
	char a[20];
	char b[20];
	int i;
	printf("Enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	
	printf("Copy string is : %s",b);
}
