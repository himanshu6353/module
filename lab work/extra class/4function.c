#include<stdio.h>
fun(int a,int b)
{ 
int sum ;
	sum=a+b;
	return sum;
}


main()
{
	int sum,a,b;
	printf("Enter A::");
	scanf("%d",&a);
	printf("Enter B::");
	scanf("%d",&b);
	
	printf("%d",fun(a,b));
}
