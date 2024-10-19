//
#include<stdio.h>
main()
{
	int a,i;
	float sum=0,k;
	
	printf("Enter value::");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		k=(float)i/(i+1);
		if(i%2==0)
		{
		k=-k;	
		}

		sum=sum+k;
		
	}
	
	printf("%f",sum);
}
