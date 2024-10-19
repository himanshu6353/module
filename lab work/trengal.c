#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	int a,b,c;
	for(a=5;a>=1;a--)
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
}
