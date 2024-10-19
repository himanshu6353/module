#include<stdio.h>
main()
{
	int i,a[10],even=0,odd=0,sumeven=0,sumodd=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Number::",a);
		scanf("%d",&a[i]);
	}
		for(i=0;i<10;i++)
	{			
			if(a[i]%2==0)
			{
				even++;
				sumeven=sumeven+ a[i];
				
			}
			else
			{
			 	odd++;
			 	sumodd=sumodd+a[i];
			}		
	}
	printf("total even number is ::%d\n",even);
	printf("total odd number is ::%d\n",odd);
	printf("sum of even number is ::%d\n",sumeven);
	printf("total of odd number is ::%d\n",sumodd);
}
