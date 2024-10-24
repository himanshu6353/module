//Function Overloading
#include<iostream>
using namespace std;
class A{
	public:
		fun(int a,int b)
		{
			cout<<"Addition of a and b is::"<<a+b<<endl;
			cout<<"Subtraction of a and b is::"<<a-b<<endl;
			cout<<"Multiplication of a and b is::"<<a*b<<endl;
			
		}
		fun1(float x,float y)
		{
			cout<<"Division of a and b is::"<<x/y<<endl;
			
		}
};


main()
{
	A obj;
	obj.fun(4,8);
	obj.fun1(4,2);
	
}
