#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
			cout<<"This is class A using Constructor"<<endl;
		}
};

class B:public A{
	public:
		B()
		{
			cout<<"This is class B using Constructor"<<endl;
		}
};

class C:public B{
	public:
		C()
		{
			cout<<"This is last class using Constructor"<<endl;
		}
};


main()
{
	C obj;
	
}
