#include<iostream>
using namespace std;
class A{
	private:
		int a,b;
		friend fatch(A & obj) ;//friend function 
		
};

fatch(A & obj)
		{
			cout<<"Enter A::";
			cin>>obj.a;
			cout<<"Enter B::";
			cin>>obj.b;
			cout<<"Addition::"<<obj.a+obj.b;
			
		}



main()
{
	A obj;
	fatch(obj);
}
