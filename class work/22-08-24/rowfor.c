#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter value::");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
