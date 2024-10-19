//Patterns
#include<stdio.h>
main()
{
	int i,j,a,b;
	
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(a=4;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
