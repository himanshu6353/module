#include<stdio.h>
main()
{
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
