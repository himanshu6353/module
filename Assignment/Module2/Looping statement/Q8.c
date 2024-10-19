//find out the max from given number
#include<stdio.h>
main()
{
	int a,i,k=0;
	
	printf("Enter Number::");
	scanf("%d",&a);
	
	while(a>0)
	{
		i=a%10;
		if(i>k)
		{
			k=i;
		}
		a /=10;
	}
	printf("Max number is ::%d",k);
}
