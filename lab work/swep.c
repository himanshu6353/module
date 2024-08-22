#include<stdio.h>
main()
{
	int a,b;
	printf("Enter value of A::");
	scanf("%d",&a);
	printf("Enter value of B::");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After sweping A:%d",a);
	printf("\nAfter sweping B:%d",b);
	
	
}
