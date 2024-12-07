#include<iostream>
using namespace std; 
class Student{		
	private:
		int cl,rollnumber,marks;	//take private datatype
		string name,add;
	public:
		get()	//method for user input
		{
			cout<<"Enter your name::";	
			cin>>name;
			cout<<"Enter your class::";
			cin>>cl;
			cout<<"Enter your Roll number:: ";
			cin>>rollnumber;
			cout<<"Enter your marks out of 100::";
			cin>>marks;
			cout<<"Enter your address::";
			cin>>add;
		}
		grade()
		{
			cout<<"Your name is::"<<name<<endl;
			cout<<"your class is::"<<cl<<endl;
			cout<<"Your roll number is ::"<<rollnumber<<endl;
			if(marks>100)		//use condition for grade system
			{
				cout<<"marks was invalid!!!";
			}
			else if(marks>=90)
			{
				cout<<"you pass with A grade";
			}
			else if(marks>=80)
			{
				cout<<"you pass with B grade";
			}
			else if(marks>=60)
			{
				cout<<"you pass with C grade";
			}
			else if(marks>=50)
			{
				cout<<"you pass with D grade";
			}
			else if(marks>=33)
			{
				cout<<"you pass with E grade";
			}
			else
			{
				cout<<"you fail";
			}
			cout<<"\nyour address is::"<<add;
		}
};


main()
{
	Student obj;
	obj.get();	
	obj.grade();

}
