#include<iostream>
using namespace std;
class A{
	public:
		func()
		{
			cout<<"hello perent class";
		}
};
class B:public A{
	public:
		func1()
		{
			cout<<"hello child class";
		}
};

main()
{
	B obj;
	obj.func;
	obj.func1;
}
