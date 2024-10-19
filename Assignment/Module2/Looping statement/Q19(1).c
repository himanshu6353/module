//Patterns
#include<stdio.h>
main()
{
	int a,i,j;
	char ch= 'A';
	
		printf("Enter row::");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",ch);
			ch++;
		}
		printf("\n");
	}
}
