#include<stdio.h>

arr()
{
	int a[5],i,j,des=0;
	for(i=0;i<5;i++)
	{
		printf("Enter Number ::");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				des=a[i];
				a[i]=a[j];
				a[j]=des;
			}
		}
	}
}
 fac()
{
	int i,a,fact=1;
	printf("Enter number::");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("factoriyal number is::%d",fact);	
}
rev()
{
	int a,i,rev=0,j;
	
	printf("Enter number::");
	scanf("%d",&a);
	while(a!=0)
	{
		j=a%10;
		rev=rev*10+j;
		a=a/10;
	}
	printf("Revers no. is::%d",rev);
}
sum()
{
	int a,b;
	printf("Enter Number::");
	scanf("%d",&a);
	printf("Enter Number::");
	scanf("%d",&b);
	printf("Total is::%d",a+b);
	
}


main()
{
	
			while(1)
	{
		int ch;
		printf("press 1 for array asecnding\n ");
		printf("press 2 for factoriyal number \n");
		printf("press 3 for Reverse number \n");
		printf("press 4 for Sum of number \n");
		printf("press 5 for Exit \n");
		printf("Enter your choice::\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			arr();
		}
		else if(ch==2)
		{
			fac();
		}
		else if(ch==3)
		{
			rev();
		}
		else if(ch==4)
		{
			sum();
		}
		else
		{
			printf("Invalid choice!!!!");
		}
	
	}
}
