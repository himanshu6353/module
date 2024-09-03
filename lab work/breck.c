#include<stdio.h>
main()
{
	int i,j;
	printf("Enter value ::");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	{
	if(i==5)
	{
		continue;
	}
			printf("%d\n",i);
    if(i==10)
	{
		break;
	}
	}
}
