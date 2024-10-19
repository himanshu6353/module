#include<iostream>
using namespace std;
class A{
	public:
		A(int a,int b)//parametrised
		{
		
		cout<<"A :"<<a<<endl;
		cout<<"B :"<<b<<endl;
		}
};
main()
{
	A ret(10,20);//create a object
}
