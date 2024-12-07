#include<iostream>
using namespace std;
class A{
	public:
		int a,b,sum,sub;
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
		fun1()
		{
			sub=a-b;
			cout<<"Substreaction is::"<<sub<<endl;
		
		}
};
class C:public A{
	public:
		fun2()
		{
			sum=a+b;
			cout<<"Total is ::"<<sum;	
		}
};
main()
{
	B obj1;
	C obj;
	
	obj.fun();
	obj1.fun1();
	obj.fun2();
}
