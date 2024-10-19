#include<stdio.h>
struct  Myfun{
	int a,b;
}s1;


main()
{
	//struct Myfun s1;
	printf("Enter Number 1 : ");
	scanf("%d",&s1.a);
	printf("Enter Number 2 : ");
	scanf("%d",&s1.b);
	
	printf("ADDITION : %d",s1.a+s1.b);
}
