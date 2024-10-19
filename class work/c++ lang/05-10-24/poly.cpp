#include<iostream>
using namespace std;
class A{
	public:
		fun()
		{
			cout<<"hello"<<endl;
		}
};

class B:public A{
	public:
		fun()
		{
			A::fun();//scope resoliution operater
			cout<<"welcome"<<endl;
		}
};
main(){
	B obj;
	obj.fun();

}
