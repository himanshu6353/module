//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
main()
{
	int a,j,i,sum=0,fact;
	
	printf("Enter number ::");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
	
		
		
	}
	printf("%d",sum);
	
	
}
