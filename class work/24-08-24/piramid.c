#include<stdio.h>
main()
{
	int a,b,c;
	for(a=1;a<=5;a++)
	{
		for(c=1;c<=5-a;c++)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf(" *");
		}
		printf("\n");
	}
	int i,j,k;
	for(i=5;i>=1;i--)//row
	{
		for(k=1;k<=5-i;k++)//space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)//colume
		{
			printf(" *");
		}
		printf("\n");
	}
}
