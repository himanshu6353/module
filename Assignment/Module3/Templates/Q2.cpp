#include<iostream>
using namespace std;
template<typename T>
T sort(T a[])
{
	int temp,i,j;

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"After sweping ::"<<a[i]<<endl;
	}
}

main()
{
	int a[5],i;
		for(i=0;i<5;i++)
	{
		cout<<"Enter value::";
		cin>>a[i];
	}
	
	sort<int>(a);
	
}
