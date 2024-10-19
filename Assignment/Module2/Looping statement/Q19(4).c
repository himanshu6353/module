//Patterns
#include<stdio.h>
main()
{
	
	int a,i,j,k;
	
	printf("Enter row::");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<(2*i-1);j++)
		{
				printf("*");
			
			
		}
		printf("\n");
	}
}
