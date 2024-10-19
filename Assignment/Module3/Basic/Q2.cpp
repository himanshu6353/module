//create simple calculator using class
#include<iostream>
using namespace std;
class A{
	public:
		fun()
		{
			int a,b,c,d,x,y,total=0;
			cout<<"1:-Select a for +"<<endl;
			cout<<"2:-Select b for -"<<endl;
			cout<<"3:-Select c for *"<<endl;
			cout<<"4:-Select d for /"<<endl;
			cout<<"Enter value 1::";
			cin>>x;
			cout<<"Enter value 2::";
			cin>>y;
			cout<<"what you want to do ::";
			cin>>c;
			switch(c)
	{
	
		case 1:
			cout<<"Addition:"<<x+y;
			break;
		case 2:
			cout<<"Substrection:"<<x-y;
			break;
		case 3:
			cout<<"Multiplication:"<<x*y;
			break;
		case 4:
			cout<<"Division:"<<(float)x/y;
			break;
	}
			
			
		}
};
main()
{
	A obj;
	obj.fun();
}
