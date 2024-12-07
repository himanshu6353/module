#include<iostream>
using namespace std;
class BankAccount{
	private:
		int  acnumber,balance=5000,dep,with;	//using private datatype
	public:
	
		deposit()	//method use for add balance
		{
			cout<<"Enter money you wont to deposit::";
			cin>>dep;
			balance=balance+dep;
			cout<<"Your total balance is::"<<balance<<endl;
		}
		withdraw()		//use method for withdraw balance
		{
			cout<<"Enter money you wont to withdraw::";
			cin>>with;
			if(balance>with)
			{
			balance=balance-with;
			}
			else
			{
				cout<<"that much amount is over::";
			}
			
			cout<<"Your total balance is::"<<balance<<endl;
			
		}
		check(){		//check balance
			cout<<"Your Balance is::"<<balance<<endl;
		}
		
};


main()
{
	BankAccount obj;
	int b,ch;
	string a;
	cout<<"Enter your name::";
	cin>>a;
	cout<<"Enter your account number::";
	cin>>b;
	
	while(1)
	{
			
		cout<<"press 1 for deposit money::"<<endl;
		cout<<"press 2 for withdraw money::"<<endl;
		cout<<"press 3 for check money::"<<endl;
		cout<<"press 4 for exit::"<<endl;
		cout<<"Enter your choice::";
		cin>>ch;
		if(ch==1)
		{
		
			obj.deposit();
		}
		else if(ch==2)
		{
			obj.withdraw();
		}
		else if(ch==3)
		{
			obj.check();
		}
		else if(ch==3)
		{
			cout<<"Thank you!!!"<<endl;
		}
		else
		{
			cout<<"Invalid choice!!!"<<endl;
		}
	}
}
