#include<iostream>
using namespace std;
class lecture{
	public:
		int num,i,ch,j;
		string name,subname,course;
		lecture()
		{
			
		}
		fun()
		{
			while(1)
			{
				cout<<"press 1 for Enter lecturer details"<<endl;
				cout<<"Press 2 for Show lecturer details"<<endl;
				cout<<"Press 3 for Exit::"<<endl;
				cout<<"Enter your choich::";
				cin>>ch;
				if(ch==1)
				{
					for(i=0;i<5;i++)
					{
					cout<<"______________________________________________________________________"<<endl;
					cout<<"Enter Name of the lecturer::";
					cin>>name;
					cout<<"Enter Name of the subject::";
					cin>>subname;
					cout<<"Enter Name of course::";
					cin>>course;
					cout<<"Enter Number of lecturers::";
					cin>>num;
					break;
					}
				}
				else if(ch==2)
				{
					for(j=0;j<i;j++)
					{
						cout<<"________________________________________________________________________________"<<endl;
						cout<<"Name of lecturer is::"<<name<<endl;
						cout<<"Name of Subject is:: "<<subname<<endl;
						cout<<"Name of course::"<<course<<endl;
						cout<<"Number of lecturers is::"<<num<<endl;
						cout<<"________________________________________________________________________________"<<endl;
					}
				}
				else if(ch==3)
				{
					cout<<"Thank you!!!"<<endl;
				}
				else
				{
					cout<<"Invalid choich!!!!!";
				}
				
			
			}
			
		}
};
main(){
	lecture obj;
	obj.fun();
}
