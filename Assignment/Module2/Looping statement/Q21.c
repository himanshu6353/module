// Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
main()
{
	int a,i=0,j,k=0,rev=0;
	
	while(i<3)
	{
		printf("Enter number::");
		scanf("%d",&a);
		j=a;
		while(a>0)
		{
			k=a%10;
			rev=rev*10+k;
			a/=10;
		}
		if( j == rev )
		{
			printf("%d is palindrome\n",j);
			
		}
		else
		{
			printf("%d is not palindrome\n",j);
		}
		i++;
	}
	
}
