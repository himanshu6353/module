#include<stdio.h>
main()
{
	int ch,bill,bill1,bill2;
	
	printf("\n****************** Welcome to our Restaurant!! ********************\n");
	while(1)//infinite loop
	{
		printf("\n press 1 for debeli -> 20rs");
		printf("\n press 2 for vadapav -> 40rs");
		printf("\n press 3 for Kachodi -> 30rs");
		printf("\n press 4 for Bill");
		printf("\n press 5 for Exit");
		
		printf("\n Enter your choice::");
		scanf("%d",&ch);
		
		if(ch==1)
		{
			printf("\n************* Welcome to dabeli Section ***************\n");
			
			int quan;
			printf("\n Enter Quantity::");
			scanf("%d",&quan);
			
			bill=quan*20;
			
		}
		else if(ch==2)
		{
			printf("\n************* Welcome to vadapav Section ***************\n");
			
			int quan1;
			printf("\n Enter Quantity::");
			scanf("%d",&quan1);
			
			bill1=quan1*40;
			
		}
		else if(ch==3)
		{
			printf("\n************* Welcome to kachodi Section ***************\n");
			
			int quan2;
			printf("\n Enter Quantity::");
			scanf("%d",&quan2);
			
			bill2=quan2*30;
			
		}
		else if(ch==4)
		{
			int total=bill+bill1+bill2;
			printf("Total amount is::%d",total);
			break;
		}
		else if(ch==5)
		{
			printf("Thank you !!");
			break;
		}
		else
		{
			printf("Invelid choice");
			break;
		}
	}
}
