//Patterns
#include<stdio.h>
main()
{
	int a,i,j,k;
	
	printf("Enter row::");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==1)
			{
				printf(" 1");
			}
			else
			{
				printf(" 0");
			}
		}
		printf("\n");
	}
}
