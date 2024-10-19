//Multiplication Table of N
#include<stdio.h>
main()
{
	int a,i,total=0;
	
	printf("Enter number ::");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
	}
	
}
