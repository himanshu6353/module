// take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>
main()
{
	int a,b,i,j,temp,k;
	printf("Enter the number of element of 1 array::");
	scanf("%d",&a);
	int arr1[a];
	for(i=0;i<a;i++)
	{
		printf("Enter number::");
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the number of element of 2 array::");
	scanf("%d",&b);
	int arr2[b];
		for(i=0;i<b;i++)
	{
		printf("Enter number::");
		scanf("%d",&arr2[i]);
	}
	printf("Enter choice :- 1 for ascending and 2 for descending order::");
	scanf("%d",&k);
	int ascending =(k==1);
		for(i=0;i<=a-1;i++)
		{
			for(j=0;j<=a-i-1;j++)
			{
				if(ascending)
				{
					if(arr1[j]>arr1[j+1])
					{
						temp=arr1[j];
						arr1[j]=arr1[j+1];
						arr1[j+1]=temp;
					}
					
					
				}
				else{
					if(arr1[i]<arr1[j])
					{
						
						temp=arr1[j];
						arr1[j]=arr1[j+1];
						arr1[j+1]=temp;
					}
				}
			}
		}
			for(i=0;i<=b-1;i++)
		{
			for(j=0;j<=b-i-1;j++)
			{
				if(ascending)
				{
					if(arr2[j]>arr2[j+1])
					{
						temp=arr2[j];
						arr2[j]=arr2[j+1];
						arr2[j+1]=temp;
					}
					
					
				}
				else{
					if(arr2[i]<arr2[j])
					{
						
						temp=arr2[j];
						arr2[j]=arr2[j+1];
						arr2[j+1]=temp;
					}
				}
			}
		}
		for(i=0;i<=a;i++)
		{
			printf("\nsorted number is::%d",arr1[i]);
		}
		printf("\n");
			for(i=0;i<=b;i++)
		{
			printf("\nsorted number is::%d",arr2[i]);
		}
		printf("\n");
}

