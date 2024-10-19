#include<iostream>
using namespace std;
template<typename T>
T sort(T i,T j,T temp)
{
	int a[5];
	for(i=1;i<=5;i++)
	{
		cout<<"Enter value::";
		cin>>a;
	}
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
		cout<<"After sweping \n"<<a[i];
	}
}

main()
{
	sort<int>(0,0,0);
	
}
