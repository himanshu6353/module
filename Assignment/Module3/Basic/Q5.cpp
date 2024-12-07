#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length,width,le;
	public:
		fun()
		{
			cout<<"Enter lenth of area::";	//take user input
			cin>>length;
			cout<<"Enter Width of area::";
			cin>>width;
			cout<<"\n rectangle's area is::"<<length*width<<endl;	//formula of find area of rectangle
			le=2*(length+width);	//formula of find area of perimeter
			cout<<" perimeter of area is::"<<le<<endl;	
		}
		
};



main()
{
	Rectangle obj;
	obj.fun();
	
}
