//1 2 3 6 9 18 27 54..
#include<stdio.h>
main()
{
	int a=1,b=2,i,k,sum;
	printf("%d,%d",a,b);
	
	for(i=0;i<=9;i++)
	{
		sum=a+b;
		printf(",%d",sum);
		a=b;
		b=sum;
	}
	printf("\n");
	
	
	
}
