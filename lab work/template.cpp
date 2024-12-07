#include<iostream>
using namespace std;
template <typename T>
T num(T x,T y)
{
	if(x>=y)
	{
		cout<<"a is greter"<<endl;
		}	
	else
	{
		cout<<"b is greter"<<endl;
	}
};
main()
{
	num<int>(8,4);
	num<char>('a','w');
}
