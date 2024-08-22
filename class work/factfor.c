#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter number::");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		c=c*b;
	}
	printf("Factoriyal is ::%d",c);
}
