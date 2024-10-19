#include<iostream>
using namespace std;

template <typename T>
T num(T x,T y,T z)
{
	if(x>y && x>z)
	{
		cout<<"1 value is greater!!"<<endl;
	}
	else if(y>x && y>z)
	{
		
		cout<<"2 value is greater!!"<<endl;
	}
	else
	{
		
		cout<<"3 value is greater!!"<<endl;
	}
}



main()
{
	num<int>(9,7,1);
	num<char>('w','b','a');
}
