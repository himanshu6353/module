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
class C:public B{
	public:
		func2()
		{
			cout<<"hello child class2";
		}
};

main()
{
	C obj;
	obj.func();
	obj.func1();
	obj.func2();
}
