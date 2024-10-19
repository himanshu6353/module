#include<stdio.h>
main()
{
	int i,sum=0,a[5];//Dynamic array
	for(i=0;i<5;i++)
	{
		printf("Enter number::");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<5;i++)
	{
		
		printf("%d\n",a[i]);
	}
	printf("Total is::%d",sum);
}
