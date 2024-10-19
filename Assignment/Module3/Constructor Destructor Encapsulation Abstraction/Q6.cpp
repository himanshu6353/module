#include<iostream>
using namespace std;
class Employee{
	private:
		int empID,salary,perf;
		string name;
	public:
		Employee()
		{
			cout<<"Enter your name::";
			cin>>name;
			cout<<"Enter your Employee ID::";
			cin>>empID;
			cout<<"Enter Your salary::";
			cin>>salary;
			cout<<"Enter you performance rating(1-10)::";
			cin>>perf;
		}
		sal()
		{
		
			if(perf>10 && perf<0)
			{
				cout<<"Invalid choice!!!";
			}
			else if(perf>=9)
			{
				salary+=5000;
			}
			else if(perf>=7)
			{
				salary+=2000;
			}
			else if(perf>=5)
			{
				salary +=1000;
			}
			else if(perf<5)
			{
				salary+=1;
			}
		
			else
			{
				cout<<"Invalid choice!!!";
			}
		}
		fun()
		{
			cout<<"Your name is::"<<name<<endl;
			cout<<"Your Employee ID is::"<<empID<<endl;
			cout<<"Your Salary is::"<<salary<<endl;
		
			
		}
		
};



main()
{
	Employee obj;
	obj.sal();
	obj.fun();
}
