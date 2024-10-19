#include<stdio.h>
main()
{
	int i;
	int a[5],b[5],total;
	for(i=0;i<5;i++)
	{
	printf("Enter value no.1::");
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("Enter value no.2::");
	scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
			
	total=a[i]+b[i];
	printf("\ntotal is ::%d",total);
	}
}
