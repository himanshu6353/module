#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter number a::");
	scanf("%d",&a);
	printf("Enter number b::");
	scanf("%d",&b);
	printf("Enter number c::");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("a is greater %d",a);
	}
	else if(b>a&&b>c)
	{
		printf("b is greater %d",b);
	}
	else
	{
		printf("c is greater %d",c);
	}
}
