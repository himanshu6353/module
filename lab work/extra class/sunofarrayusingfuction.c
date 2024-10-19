#include<stdio.h>
fun(int n[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum +=n[i];
	}
	printf("Total of array is :%d",sum);

}


main()
{
	int n[5],i;
	for(i=0;i<5;i++)
	{
	
	printf("Enter value :");
	scanf("%d",&n[i]);
	}
	fun(n);
	
}
