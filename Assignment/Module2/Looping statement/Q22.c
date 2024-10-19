//Reverse a Number Using FOR Loop
#include<stdio.h>
main()
{
	int a,i,k,rev=0;
	
	printf("Enter number ::");
	scanf("%d",&a);
	
	for(;a>0;a/=10)
	{
		k=a%10;
		rev=rev*10+k;
	
	}
	printf("After reverse::%d",rev);
}
