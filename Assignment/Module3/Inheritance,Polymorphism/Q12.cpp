#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		friend swep(A & obj);
};
swep(A & obj )
{
	cout<<"Before swaping"<<endl;
	cout<<"Enter A::";
	cin>>obj.a;
	cout<<"Enter B::";
	cin>>obj.b;
	obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
	cout<<"After swaping"<<endl;
	cout<<"A::"<<obj.a<<endl;
	cout<<"B::"<<obj.b;
	
	
}


main()
{
	A obj;
	swep(obj);
	
}
