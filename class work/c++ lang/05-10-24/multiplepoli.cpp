#include<iostream>
using namespace std;
class A{
	public:
		fun()
		{
			cout<<"hello"<<endl;
		}
};

class B{
	public:
		fun()
		{
			//A::fun();//scope resoliution operater
			cout<<"welcome"<<endl;
		}
};
class C:public A,public B
{
	public:
		fun()
		{
			A::fun();
			B::fun();//scope resoliution operater
			cout<<"this is child class"<<endl;
		}
};
main(){
	C obj;
	obj.fun();

}
