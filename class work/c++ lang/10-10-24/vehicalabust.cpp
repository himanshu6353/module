#include<iostream>
using namespace std;
class Vehicle{
	public:
		virtual wheel()=0;
			virtual colour()=0;
		
};
class bike:public Vehicle{
	public:
		wheel(){
			
			cout<<"Bike have two wheel"<<endl;
		}
		colour(){
			cout<<"bike have black colour"<<endl;
		}
};

class car:public Vehicle{
	public:
		wheel(){
			cout<<"car have four wheel"<<endl;
		}
		colour(){
			cout<<"car have blue colour"<<endl;
		}
};
class autoo:public Vehicle{
	public:
		wheel(){
			cout<<"auto have three wheel"<<endl;
		}
		colour(){
			cout<<"auto have yellow colour"<<endl;
		}
};

main()
{
	Vehicle obj;
	obj.wheel();
	obj.colour();
	bike obj1;
	obj1.wheel();
	obj1.colour();
	car obj2;
	obj2.wheel();
	obj2.colour();
	autoo obj3;
	obj3.wheel();
	obj.colour();
}
