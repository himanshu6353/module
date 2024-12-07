#include<iostream>
using namespace std;
class A{
	public:
		int a,i,fact=1;
		friend class B;
};
class B{
	public:
		facto(A & obj)
		{
				cout<<"Enter number::";
				cin>>obj.a;
				for(obj.i=1;obj.i<=obj.a;obj.i++)
			{
					obj.fact=obj.fact*obj.i;
			}
					cout<<"Factorial is::"<<obj.fact;
			}
};
main()
{
	A obj;
	B obj1;
	obj1.facto(obj);
}
