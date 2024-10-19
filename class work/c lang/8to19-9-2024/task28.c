#include<stdio.h>
add()
{
	int n1,n2;
	
	printf("Enter Number 1: ");
	scanf("%d",&n1);
	printf("Enter Number 2: ");
	scanf("%d",&n2);
	
	return n1+n2;
}

   fact()
{
	int n;
	int i;
	int fac=1;
	printf("Enter Number 1: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	
	return fac;
}


main()
{
   printf("%d",add());
   
   printf("%d",fact());
}
