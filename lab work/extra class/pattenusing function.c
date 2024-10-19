#include<stdio.h>
fun(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}


main()
{
	int n;
	printf("Enter number of rows::");
	scanf("%d",&n);
	fun(n);
}
