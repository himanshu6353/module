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
			//A::fun();//scope resoliution operater
			cout<<"welcome"<<endl;
		}
};
class C{
	public:
		fun()
		{
			cout<<"to"<<endl;
		}
};
class D:public B,public C{
	public:
		fun()
		{
			A::fun();
			B::fun();
			C::fun();
			
			cout<<"tops"<<endl;
		}
};
main(){
	D obj;
	obj.fun();

}
