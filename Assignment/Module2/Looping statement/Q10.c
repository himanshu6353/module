//make a summation of first and last Digit.
#include<stdio.h>
main()
{
	int a,i,k,sum=0;
	
	printf("Enter value::");
	scanf("%d",&a);
	
	i=a%10;
	while(a>=10)
	{
		a/=10;
	}
	k=a;
	sum=i+k;
	printf("sum is::%d",sum);
}
