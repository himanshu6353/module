#include<iostream>
using namespace std;
class Empolyer{
	public:
		virtual salary()=0;
		
		
		
};
class shlok:public Employer{
	public:
		salary(){
			
			cout<<"Salary of shlok is 5k"<<endl;
		}
};

class himanshu:public Employer{
	public:
		salary(){
			cout<<"Salary of himanshu is 50k"<<endl;
		}
};
class Dax:public Employer{
	public:
		salary(){
			cout<<"Salary of dax is 15k"<<endl;
		}
};


main()
{
	Employer obj;
	obj.salary();
	shlok obj1;
		obj1.salary();
		Dax obj2;
		
			obj2.salary();
	
}
