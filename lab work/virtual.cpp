#include<iostream>
using namespace std;
class Vehicle{
	public:
		virtual wheel()=0;
		virtual colour()=0;
};
class bike:public Vehicle{
	public:
		wheel()
		{
			cout<<"bike have two wheels"<<endl;
		}
		colour()
		{
			cout<<"Bike have red colour"<<endl;
		}
};
class car:public Vehicle{
	public:
		wheel()
		{
			cout<<"Car have four wheels"<<endl;
		}
		colour()
		{
			cout<<"Car have blue colour"<<endl;
		}
};
main()
{

	bike obj1;
	obj1.wheel();
	obj1.colour();
	car obj2;
	obj2.wheel();
	obj2.colour();
}
