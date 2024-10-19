#include<stdio.h>
fact()
{
	int a,b=1,i;
	printf("Enter value::");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=i*b;
	}
	printf("facctorial number is::%d",b);
	
}


main()
{
	fact();
}
