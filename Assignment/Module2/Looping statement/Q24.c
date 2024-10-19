// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
main()
{
	int a,k,sum=0,multi=0;
	
	printf("Enter number ::");
	scanf("%d",&a);
	
	for(k=1;k<=a;k++)
	{
		multi=k*k;
		sum=sum+multi;
		printf("(%d*%d)",k,k);
		if(k < a)
		{
			printf(" + ");
		}
		
	}
	printf("=%d",sum);
	
	
	
}
