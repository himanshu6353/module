#include<stdio.h>
main()
{
	int i,n1=0,n2=1,n3,n;
	
	printf("enter number::");
	scanf("%d",&n);
	printf("%d",n1);
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++)
	{
		n3=n1+n2;
		printf("\n%d",n3);
		
		n1=n2;
		n2=n3;	
	}
}
