#include<iostream>
using namespace std;
class A{
	private:
		int a,b,sum=0;
		
		public:
		fun()
		{
			cout<<"Enter number 1::";
			cin>>a;
			cout<<"Enter number 2::";
			cin>>b;
			sum=a+b;
			cout<<sum;
		}
};

main()
{
	A obj;
	obj.fun();
}
