#include<stdio.h>
main()
{
	int i=0;
	while(i<=10)
	{
		i++;
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
		
	}
}
