#include<stdio.h>
main()
{
	int a[5],b[5],i,j,sum=0;
	
	for(i=0;i<5;i++)//take value from user
	{
		printf("Enter number of a::");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)//take value from user.
	{
		printf("Enter number of b::");
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum=a[i]+b[i];//sum of a and b array
		printf("sum of array is::%d\n",sum);
	}
}
