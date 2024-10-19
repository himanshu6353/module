//summation of given number
#include<stdio.h>
main()
{
	int a,i,k=0;
	
	printf("Enter value::");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		k+=i;
		a /=10;
		
	}
	printf("Total is ::%d",k);
}
