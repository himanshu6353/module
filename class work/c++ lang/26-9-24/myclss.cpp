#include<iostream>
using namespace std;

	class myclass{
		
		public:
			int a,b;
			add() //methods
			{
				cout<<"A::";
				cin>>a;
				cout<<"B::";
				cin>>b;
				cout<<"addition::"<<a+b;
			}
				sub() //methods
			{
				cout<<"\nA::";
				cin>>a;
				cout<<"B::";
				cin>>b;
				cout<<"sub::"<<a-b;
			}
			multi() //methods
			{
				cout<<"\nA::";
				cin>>a;
				cout<<"B::";
				cin>>b;
				cout<<"multi::"<<a*b;
			}
	
	};	
	


main()
{
	myclass obj;
	obj.add();
	obj.sub();
	obj.multi();
	
	
}
