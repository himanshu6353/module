#include<iostream>
using namespace std;
class A{

	private:		//use for private datatype
		int a,b;
		friend class B;
	public:			//use for public datatype
		fun()
		{
		cout<<"Enter value of A::";
		cin>>a;
		cout<<"Enter value of B::";
		cin>>b;
		}
};
class B:public A{
	protected:		//use for protect datatype
		int sum;
	public:
		fun1(A & obj)
		{
			sum=obj.a+obj.b;
			cout<<"Sum of a and b is::"<<sum;
		}
		
};
main()
{
	B obj;
	obj.fun();
	obj.fun1(obj);
}


