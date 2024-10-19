#include<iostream>
using namespace std;

	class A{
		public:
			A()//constrecter
			{
				cout<<"Welcome to owr website"<<endl;
			}
			fac()
			{
			
			int a,i,fact=1;
			cout<<"enter number::";
			cin>>a;
			
			for(i=1;i<=a;i++)
			{
				fact*=i;
			}
			cout<<fact;
		}
		~A()//destrecter
		{
			cout<<"\nThankx!!";
		}
			
	};


main()
{
	A obj;
	obj.fac();
}
