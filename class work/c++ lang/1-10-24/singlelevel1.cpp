#include<iostream>
using namespace std;
class A{
	
	public:
		func()
		{
			cout<<"hello perent class"<<endl;
		}
};
class B:public A{
	public:
		func1()
		{
			cout<<"hello child class"<<endl;
		}
};


main()
{
	B obj;
	obj.func();
	obj.func1();
	
}
