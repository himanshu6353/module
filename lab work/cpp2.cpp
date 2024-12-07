#include<iostream>
using namespace std;
class A{
	public:
		int a,b,sum;
		fun()
		{
			cout<<"Enter value of a::";
			cin>>a;
			cout<<"Enter value of b::";
			cin>>b;
			
		}
};
class B:public A{
	public:
		fun()
		{
			A::fun();
			sum=a+b;
			cout<<"Total is::"<<sum;
		}
};
main()
{
	B obj;
	obj.fun();
}
