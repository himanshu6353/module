#include<iostream>
using namespace std;
class A{
	public:
		int length,height;
		fun()
		{
			cout<<"Enter Length of area::";
			cin>>length;
			cout<<"Enter Height of area::";
			cin>>height;
		}
};
class B:public A{
	public:
		int area;
		fun()
		{
			A::fun();
			area=length*height;
			cout<<"area of Rectangle is::"<<area;
		}
};


main()
{
	B obj;
	obj.fun();
	
}
