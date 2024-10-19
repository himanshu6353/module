//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
main()
{
	int a[5],i=0,sum=0 ,even=0,odd=0;
	
	while(i<5)
	{
		printf("Enter number::");
		scanf("%d",&a[i]);
		sum = sum+a[i];
		if(a[i]%2==0)
			{
				even++;
				
			}
			else
			{
			 	odd++;
			}
		
		i++;
	}
	printf("total is ::%d\n",sum);
	printf("total even number is ::%d\n",even);
	printf("total odd number is ::%d\n",odd);
}

