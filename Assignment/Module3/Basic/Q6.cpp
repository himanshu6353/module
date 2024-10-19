#include<iostream>
using namespace std;
class Person{
	private:
		string name,country;
		int age;
	public:
		get()
		{
			cout<<"Enter your name::";
			cin>>name;
			cout<<"Enter your age::";
			cin>>age;
			cout<<"Enter your country::";
			cin>>country;	
		}
		set()
		{
			cout<<"\nYour name is::"<<name<<endl;
			cout<<"your age is::"<<age<<endl;
			cout<<"Your country is::"<<country<<endl;
		}
};


main()
{
	Person obj;
	obj.get();
	obj.set();
}
