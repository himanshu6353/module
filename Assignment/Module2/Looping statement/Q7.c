#include<stdio.h>
main()
{
	int j,rem,rev=0;
	
	printf("Enter number::");
	scanf("%d",&j);
	
	while(j!=0)
		{
			rem=j%10;
			rev=rev*10+rem;
			j=j/10;
		}
		printf("reversh Number ::%d",rev);
}

