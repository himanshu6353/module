#include<iostream>
using namespace std;
class area{
	private:
		float radius;	//private datatype
		
	public:
		float circle,circumference,pi=3.14;
		fun()
		{
			cout<<"Enter radius::";	//user input
			cin>>radius;
			
			circle = pi * radius * radius;	//formula of area of circle
    		circumference = 2 * pi * radius;	//formula of area of circumference
    		cout<<"area of circle is::"<<circle<<endl;
    		cout<<"area of circumference::"<<circumference<<endl;
		}
};



main()
{
	area obj;
	obj.fun();
}
