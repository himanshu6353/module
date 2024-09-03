#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter a::");
	scanf("%d",&a);
	printf("Enter b::");
	scanf("%d",&b);
	temp =a;
	a=b;
	b=temp;
	printf("after swap %d",a);
	printf("\nafter swap %d",b);
}
