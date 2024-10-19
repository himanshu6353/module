// Armstrong Number
#include<stdio.h>
main()
{
	int num,a,i=0,temp,remainder,sum=0,digit=0,power=1;
	
	printf("enter number::");
	scanf("%d",&num);
	
	a=num;
	temp=num;
	while(temp !=0)
	{
		digit++;
		temp/=10;
	}
	
	temp=num;
	while(temp !=0)
	{
		remainder =temp%10;
		
		while(i<digit)
		{
			power *= remainder;
			i++;
		}
		sum += power;
		temp /=10;
	}
	if(sum==a)
	{
		printf("%d Number is an armstrong number::",a);
		
	}
	else
	{
		printf("%d number is not armstrong number::",a);
	}
}
