//Addition, Subtraction, Division, Multiplication using constructor
#include<iostream>
using namespace std;
class A{
	public:
		int x,y,c;
		A()//constructor
		{
			cout<<"Enter value 1::";		//take user input
			cin>>x;
			cout<<"Enter value 2::";
			cin>>y;
			cout<<"1 select of +"<<endl;
			cout<<"2 select of -"<<endl;
			cout<<"3 select of *"<<endl;
			cout<<"4 select of /"<<endl;
				cout<<"what you want to do ::";
			cin>>c;	
		}
		fun()
		{
			int a,b,d,total=0;
		
			switch(c)		//switch Condition
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
		
	

