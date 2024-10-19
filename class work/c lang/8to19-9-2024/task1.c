#include<stdio.h>
main()
{
	//2 Variable adreess shotr
	//2 Variable point out
	
	FILE* fptr;
	
	fptr = fopen("text1.txt","w"); //open
	fprintf(fptr,"Hello this is method!!");
	fclose(fptr);
}
