#include<iostream>
using namespace std;
class area{
	private:
		float radius;
		
	public:
		float circle,circumference,pi=3.14;
		fun()
		{
			cout<<"Enter radius::";
			cin>>radius;
			
			circle = pi * radius * radius;
    		circumference = 2 * pi * radius;
    		cout<<"area of circle is::"<<circle<<endl;
    		cout<<"area of circumference::"<<circumference<<endl;
		}
};



main()
{
	area obj;
	obj.fun();
}
