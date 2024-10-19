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
	};
	class myclass1{
		public:
				int a,b;
					sub() //methods
			{
				cout<<"\nA::";
				cin>>a;
				cout<<"B::";
				cin>>b;
				cout<<"sub::"<<a-b;
			}
			
	};
	class myclass2{
		public:
				int a,b;
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
	myclass1 obj1;
	obj1.sub();
	myclass2 obj2;
	obj2.multi();	
}
