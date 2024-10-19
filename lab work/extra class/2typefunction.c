#include<stdio.h>
fun(int n)//parameteres
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%d\n",fact);
	
}
add(int a,int b)
{
	printf("%d",a+b);
}



main()
{
	int n;
	printf("Enter number::");
	scanf("%d",&n);
	fun(n);
	add(10,20);//argumentrs
	
}
