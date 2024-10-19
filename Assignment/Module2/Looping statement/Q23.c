//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
main()
{
	int a,k,sum=0;
	
	printf("Enter number ::");
	scanf("%d",&a);
	for(k=1;k<=a;k++)
	{
		sum=sum+k;
		printf("%d",k);
		if(k < a)
		{
			printf(" + ");
		}
		
	}
	printf("=%d",sum);
	
	
	
}
