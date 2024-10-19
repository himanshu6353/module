#include<stdio.h>
main()
{
	int a[3][3]={{5,7,9},{3,7,9},{2,4,6}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
}
