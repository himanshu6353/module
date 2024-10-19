#include<stdio.h>
main()
{
	//strlen
	char a[10];
	int i,len=0;
	printf("Enter Name::");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("Length of name is::%d",len);
}
