#include<stdio.h>
main()
{
	int a;
	printf("Enter temperature ::");
	scanf("%d",&a);
	if(a<=10)
	{
		printf("freeze weather");
	}
	else if(a<=20)
	{
		printf("cold weather");
	}
	else if(a<=30)
	{
		printf("normal weather");
	}
	else
	{
		printf("hot weather");
	}
}
