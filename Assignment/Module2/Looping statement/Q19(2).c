//Patterns
#include<stdio.h>
main()
{
	int a,i,j;
	int num=1;
	
		printf("Enter row::");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",num);
			num++;
		}
		printf("\n");
	}
}
