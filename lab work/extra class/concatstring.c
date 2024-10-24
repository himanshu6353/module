#include<stdio.h>

conc1()
{
	char x[5];
	char y[5];
	int i,j;
	printf("Enter string 1::");
	gets(x);
	printf("Enter string 2::");
	gets(y);
	for(i=0;x[i]!='\0';i++);
	for(j=0;y[j]!='\0';j++)
	{
		x[i]=y[j];
		i++;
	}
	x[i]='\0';
	printf("merge string is::%s",x);
}
main()
{
	conc1();
}
