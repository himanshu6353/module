//Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int a,i=1,sum=0;
	
	printf("Enter number::");
	scanf("%d",&a);
	
	while(i<=a)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of natural number is ::%d",sum);
}
