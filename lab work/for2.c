#include<stdio.h>
main()
{
	int i,j,k;
		for(i=1;i<=10;i=i+2)
	{
		for(k=1;k<=10-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
 }
}

