#include<stdio.h>
main()
{
	int n,sum=0;
	printf("Enter number::");
	scanf("%d",&n);
	
	int i=1;//intialize
	while(i<=n)//condition
	{
		sum=sum+i;//sum of two value
		i++;//increment
		
	}
	printf("Total::%d",sum);
}
