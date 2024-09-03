#include<stdio.h>
main()
{
	int n;
	int i=1;//intialize
	printf("Enter number::");
	scanf("%d",&n);
	while(i<=n)//condition
	{
		printf("%d\n",n);
		n=n-1;//increment
	}
}
