//Factorial of a Given Number 
#include<stdio.h>
main()
{
	int a,i=1,total=1;
	
	printf("Enter number::");
	scanf("%d",&a);
	
	while(i<=a)
	{
		total=total*i;
		i++;
	}
	printf("factorial number is::%d",total);
}
