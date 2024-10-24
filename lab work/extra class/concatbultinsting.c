#include<stdio.h>
conc()
{
	char a[5];
	char b[5];
	printf("Enter string 1::");
	scanf("%s",&a);
	printf("Enter string 2::");
	scanf("%s",&b);
	printf("merge string is::%s\n",strcat(a,b));
}

main()
{
	conc();

}
