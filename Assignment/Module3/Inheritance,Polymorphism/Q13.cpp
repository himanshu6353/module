// Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class fun{
	private:
	int a,b;
	friend fun1(fun & obj);
};
fun1(fun & obj)
{
	cout<<"Enter A::";
	cin>>obj.a;
	cout<<"Enter B::";
	cin>>obj.b;
	if(obj.a>obj.b)
	{
		cout<<"A is greater!!";
	}
	else if(obj.a==obj.b)
	{
		cout<<"Both are equal";
	}
	else
	{
		cout<<"B is greater!!";
	}
}
main()
{
	fun obj;
	fun1(obj);
}
