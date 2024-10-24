#include<iostream>
using namespace std;
class student{
	public:
		int rollno;
		string name;
		fun()
		{
			cout<<"Enter student Name::";
			cin>>name;
			cout<<"Enter student Roll Number:: ";
			cin>>rollno;
		}
};
class marks
{
	public:
	int sub1,sub2,sub3;
	fun1()
	{
	cout<<"Enter your marks of science::";
	cin>>sub1;
	cout<<"Enter your marks of math::";
	cin>>sub2;
	cout<<"Enter your marks of hindi::";
	cin>>sub3;
	}
};
class Marksheet:public student,public marks{
	public:
		int total;
		float per;
		fun()
		{
		student::fun();
		marks::fun1();
		cout<<"----------------------your marksheet------------------------"<<endl;
		cout<<"your name is ::"<<name<<endl;
		cout<<"your Roll Number is ::"<<rollno<<endl;
		cout<<"your science marks is ::"<<sub1<<endl;
		cout<<"your math marks is ::"<<sub2<<endl;
		cout<<"your hindi marks is ::"<<sub3<<endl;
		total=sub1+sub2+sub3;
		cout<<"Total of all subject is ::"<<total<<endl;
		per=total/3;
		cout<<"your Percentage is::"<<per;
		}
};
main()
{
	Marksheet obj;
	obj.fun();
}
