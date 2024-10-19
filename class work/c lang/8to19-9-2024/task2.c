#include<stdio.h>
main()
{
	//2 Variable adreess shotr
	//2 Variable point out
	
	FILE* fptr;
	
	fptr = fopen("text1.txt","a"); //open
	fprintf(fptr,"\nHello this is append method!!");
	fclose(fptr);
}
