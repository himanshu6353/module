#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length,width,le;
	public:
		fun()
		{
			cout<<"Enter lenth of area::";
			cin>>length;
			cout<<"Enter Width of area::";
			cin>>width;
			cout<<"\n rectangle's area is::"<<length*width<<endl;
			le=2*(length+width);
			cout<<" perimeter of area is::"<<le<<endl;	
		}
		
};



main()
{
	Rectangle obj;
	obj.fun();
	
}
