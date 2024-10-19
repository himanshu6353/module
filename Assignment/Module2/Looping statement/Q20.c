//Patterns
#include<stdio.h>
main()
{
	
	int a=1,i,j;
	
	for(i=1;i<=9;i++)
	{
		printf(" %d",a);
		a++;
		
		for(j=1;j<=9;j++)
		{
			printf(" %d",a);
			a++;
		}
		printf("\n");
	}
}
