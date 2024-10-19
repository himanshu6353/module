#include<stdio.h>
main()
{
	int a,i,c=0;
	printf("Enter number::");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Number is prime!!");
	}
	else
	{
		printf("Number is not prime!!");
	}
}
