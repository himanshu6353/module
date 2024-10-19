#include<iostream>
using namespace std;
class Cricketer{
	public:
		int age;
		string name;
		fun()
		{
		cout<<"Enter name::";
		cin>>name;
		cout<<"Enter age::";
		cin>>age;
			
		}
		
};
class Batsman:public Cricketer{
	public:
		int Totalrun,Totalmatch,Avg,bestperf;
		fun1()
		{
			cout<<"Enter Total run::";
			cin>>Totalrun;
			cout<<"Enter Total match::";
			cin>>Totalmatch;
			cout<<"Enter best performance::";
			cin>>bestperf;
			
		}
		fun2()
		{
			cout<<"_______________________________________________________________________________________"<<endl;
			cout<<"Your name is::"<<name<<endl;
			cout<<"Your age is::"<<age<<endl;
			cout<<"Your total run is::"<<Totalrun<<endl;
			cout<<"Your Total match is::"<<Totalmatch<<endl;
			cout<<"Your best performance is::"<<bestperf<<endl;
			
			if(Totalmatch==0)
			{
				cout<<"Player is not start to play!!"<<endl;
				
			}
			Avg=Totalrun/Totalmatch;
			cout<<"Avarage is::"<<Avg;
		}
		
    

};


main()
{
	Batsman obj;
	obj.fun();
	obj.fun1();
	obj.fun2();
}
