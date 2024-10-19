#include<iostream>
using namespace std;
template <typename T>
T swep(T x,T y,T temp)
{
	temp=x;
	x=y;
	y=temp;
	cout<<x<<endl;
	cout<<y;
}


main()
{
	swep<int>(20,30,0);
	
}
