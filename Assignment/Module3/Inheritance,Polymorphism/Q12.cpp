#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		friend swep(A & obj);		//using Friend function
};
swep(A & obj )		//create object
{
	cout<<"Before swaping"<<endl;
	cout<<"Enter A::";		//take user input
	cin>>obj.a;
	cout<<"Enter B::";
	cin>>obj.b;
	obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
	cout<<"After swaping"<<endl;	//swap value using friend function
	cout<<"A::"<<obj.a<<endl;
	cout<<"B::"<<obj.b;
	
	
}


main()
{
	A obj;
	swep(obj);
	
}
