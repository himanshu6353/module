#include<stdio.h>
main()
{
	int a;
	printf("enter value of a::");
	scanf("%d",&a);
	if(a>0)
	{
		printf("a is positive");
	}
	else if(a==0)
	{
		printf("neither positive not negative");
	}
	else
	{
		printf("a is negative");
	}
}
