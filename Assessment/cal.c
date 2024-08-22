#include<stdio.h>
main()
{
	int a,y,z;
	printf("---------------MENU---------------");
	printf("\n1:-Additon");
	printf("\n2:-Substrection");
	printf("\n3:-Multiplication");
	printf("\n4:-Division");
	
	printf("\nEnter value no.1::");
	scanf("%d",&y);
	printf("Enter value no.2::");
	scanf("%d",&z);
	
	printf("\nEnter your choice::");
	scanf("%d",&a);
	switch(a)
	{
	
		case 1:
			printf("Addition: %d",y+z);
			break;
		case 2:
			printf("Substrection:%d",y-z);
			break;
		case 3:
			printf("Multiplication:%d",y*z);
			break;
		case 4:
			printf("Division:%.2f",(float)y/z);
			break;
	}
	
}
