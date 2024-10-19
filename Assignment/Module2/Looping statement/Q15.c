// sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int a,i=1,sum=0;
	
	while(i<=10)
	{
		printf("Enter number::");
		scanf("%d",&a);
		sum = sum+a;
		i++;
	}
	printf("total is ::%d",sum);
}
