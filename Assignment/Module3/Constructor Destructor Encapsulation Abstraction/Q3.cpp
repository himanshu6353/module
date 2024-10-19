#include<iostream>
using namespace std;
class Car{
	private:
		string company,model;
		int year;
	public:
		get()
		{
			cout<<"Enter company name::";
			cin>>company;
			cout<<"Enter name of car model::";
			cin>>model;
			cout<<"Enter year of car ::";
			cin>>year;	
		}
		set()
		{
			cout<<"\nYour car company is::"<<company<<endl;
			cout<<"Your car model is::"<<model<<endl;
			cout<<"Your car year is::"<<model<<endl;
		}
};


main()
{
	Car obj;
	obj.get();
	obj.set();
}
