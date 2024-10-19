#include<stdio.h>
main()
{
	FILE* fptr;
	
	fptr = fopen("text1.txt","r");
	
	char a[100];
	while(fgets(a,100,fptr)!=NULL)
	{
		printf("%s",a);
	}
	fclose(fptr);
}
