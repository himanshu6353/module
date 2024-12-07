#include<iostream>
using namespace std;
class Person{
	public:
		int age;
		string name;
		fun()		//Method for take user data
		{
			cout<<"Enter name::";
			cin>>name;
			cout<<"Enter age::";
			cin>>age;
		}
};
class student:public Person{
	public:
		float per,a;
		fun1()		//finding percentage
		{
			cout<<"Enter number out of 300::";
			cin>>a;
			per=a/3;
			cout<<"percentage is::"<<per<<endl;
		}
};
class Teacher:public Person{
	public:
		fun2()		//using Multiple Inheritance
		{
		int salary;
		cout<<"Enter your salary::";
		cin>>salary;
		}
};
main()
{
	cout<<"*****Student information*****"<<endl;
	student obj;
	obj.fun();
	obj.fun1();
	cout<<"______________________________________________________"<<endl;
	cout<<"*****Teacher information*****"<<endl;
	Teacher obj1;
	obj1.fun();
	obj1.fun2();
}
