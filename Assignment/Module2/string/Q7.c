#include<stdio.h>
main()
{
	char a[10],b[10];
	int i;
	printf("Enter string::");	//take string from user
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)	//loop for copy string to other string
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("copy strng is::%s",b);	//show string
}
