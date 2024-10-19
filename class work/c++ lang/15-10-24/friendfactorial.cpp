#include<iostream>
using namespace std;
class A{
	private:
		int fact=1,i,a;
		friend factorial(A & obj);
};
factorial(A & obj)
{
	cout<<"Enter Number::";
	cin>>obj.a;
	for(obj.i=1;obj.i<=obj.a;obj.i++)
	{
		obj.fact *=obj.i;
	}
	cout<<"Factorial is::"<<obj.fact;
}




main()
{
	A obj;
	factorial(obj);
}
