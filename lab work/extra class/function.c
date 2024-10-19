#include<stdio.h>
fac()
{
	int i,a,fact=1;
	printf("Enter number::");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("factoriyal number is::%d",fact);
}


main()
{
	fac();
}
