#include<iostream>
using namespace std;
class A{
	public:
		int length,height;
		fun()			//Method for taking input from user
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
			area=length*height;		//Formula of find Rectangle
			cout<<"area of Rectangle is::"<<area;
		}
};


main()
{
	B obj;
	obj.fun();
	
}
