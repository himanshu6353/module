#include<iostream>
using namespace std;

class A{
	public:
		fun(int b)
		{
			cout<<"hello"<<endl;
		}
			fun(int a,int b)
		{
			cout<<"welcome"<<endl;
		}
			fun(string a)
		{
			cout<<"to "<<endl;
		}
			fun()
		{
			cout<<"tops"<<endl;
		}
};


main()
{
	A obj;
	obj.fun(10);
	obj.fun(10,20);
	obj.fun("hello");
	obj.fun();
 } 
