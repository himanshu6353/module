#include<iostream>
using namespace std;
class A{
	public:
		string name;
		int ac,bal=5000,de,we;
		regi()
		{
			cout<<"Enter Your name::";
			cin>>name;
			cout<<"Enter your account Number::";
			cin>>ac;
			cout<<"Your balance is::"<<bal<<endl;
		}
		deposit(){
			cout<<"Enter Deposit Amount::";
			cin>>de;
			cout<<"your Deposit Amount is"<<de<<endl;
			bal=bal+de;
		}
		with()
		{
			cout<<"Enter  withdraw Amount::";
			cin>>we;
			cout<<"Your Withdraw amount is::"<<we<<endl;
			if(we>bal)
			{
				
				cout<<"that much amount is over::"<<we-bal<<endl;
				
			}
			else
			{
				bal=bal-we;
			}
		}
		check(){
			cout<<"Your Balance is::"<<bal<<endl;
		}
};

main(){
	A obj;
	int ch,ch1;
	cout<<"press 1 for Register::"<<endl;
	cout<<"press 2 for Exit"<<endl;
	cout<<"Enter Your Choice::";
	cin>>ch;
	
	if(ch==1)
	{
		obj.regi();
		while(1)
		{
			cout<<"press 1 for Deposit::"<<endl;
			cout<<"press 2 for withdraw::"<<endl;
			cout<<"press 3 for check Balance::"<<endl;
			cout<<"press 4 for Exit::"<<endl;
			cout<<"Enter Your Choice::"<<endl;
			cin>>ch1;
			if(ch1==1)
			{
				obj.deposit();
			}
			else if(ch1==2)
			{
				obj.with();
			}
			else if(ch1==3)
			{
				obj.check();
			}
			else if(ch1==4)
			{
				cout<<"thanks ";
				break;
			}
			else
			{
				cout<<"Invelid choice"<<endl;
				break;
			}
		}
		
	}
	else
	{
		cout<<"Thank you!!!!"<<endl;
	
	}
};
