#include<stdio.h>
main()
{
	int i,j,fact;
	
	printf("Enter Number::");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	{
		fact=fact*i;
	}
	printf("Facctoriyal number is ::%d",fact);
}
