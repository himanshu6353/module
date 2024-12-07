#include<iostream>
using namespace std;
class Car{
	private:
		string company,model;	//use private variable
		int year;
	public:
		get()		//get method for user input
		{
			cout<<"Enter company name::";
			cin>>company;
			cout<<"Enter name of car model::";
			cin>>model;
			cout<<"Enter year of car ::";
			cin>>year;	
		}
		set()	//set method for show
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
