#include<stdio.h>
main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int i,j,sum;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter number::");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=a[i][j]+a[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}
}
