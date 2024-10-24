#include<stdio.h>
conc()
{
	char a[5],b[5];
	int i,j;
	printf("Enter string 1::");
	gets(a);
	printf("Enter string 2::");
	gets(b);
	for(i=0;a[i!='\0';i++);
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("merge of string is::%s",a);
}
copy()
{
	char a[10],b[10];
	int i;
	printf("Enter string::");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("copy strng is::%s",b);
	
}
length()
{
	char a[5];
	int i,leng=0;
	printf("Enter string 1::");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		leng++;
	}
	a[i]='\0';
	printf("Total length of string is::%s",leng);
	
	
}
compayer()
{
	char a[5],b[6];
	printf("Enter string 1::");
	gets(a);
	printf("Enter string 2::");
	gets(b);
	int result=strcmp(a,b);
	printf("Result is %d",result);
}







main()
{
	
	int ch;
	printf("press 1 for cpncat string::\n");	
	printf("press 2 for copy string::\n");
	printf("press 3 for find length of string::\n");
	printf("press 4 for compayer string::\n");
	printf("press 1 for cpncat string::\n");
	printf("Enter your choich::");
	gets(ch);
	while(1)
	{
		if(ch==1)
		{
			conc();
		}
		else if(ch==2)
		{
			
		}
		else if(ch==3)
		{
			
		}
		else if(ch==4)
		{
			
		}
		else
		{
			
		}
	}
}
