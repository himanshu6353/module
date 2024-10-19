#include<stdio.h>
main()
{
	char a[10];
	int i;
	int len=0;
	printf("Enter Name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	
	printf("Length of string : %d",len);
	
}

