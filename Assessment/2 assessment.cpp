#include<iostream>
using namespace std;
class LectureDetails{
	public:
		string lecturerName[10];  // Name of the lecturer
    	string subjectName[10];    // Name of the subject
    	string courseName[10];     // Name of the course
		int a[10],i;
		initial()
		{
			
			
			cout<<"Enter name of lecturer::";
			cin>>lecturerName[i];
			cout<<"Enter name of Subject::";
			cin>>subjectName[i];
			cout<<"Enter name of course::";
			cin>>courseName[i];
			cout<<"Enter number of lecturers::";
			cin>>a[i];

		}	
};
class display:public LectureDetails
	{
		public:
		dis()
		{
		cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "no. of lecturer:"<<a<<endl;
        cout << "---------------------------" << endl;
	}
	};




main(){
	display obj1;
	while(1)
	{
		int ch;
		cout<<"press 1 for add a lecturer details"<<endl;
		cout<<"press 2 for display name and lecturer details"<<endl;
		cout<<"press 3 for Exit"<<endl;
		cout<<"Enter your Choice::"<<endl;
		cin>>ch;
		if(ch==1)
		{
		
			obj1.initial();
		}
		else if(ch==2)
		{
			
			obj1.dis();
		}
		else if(ch==3)
		{
			cout<<"Thank you !!!";
		}
		else
		{
			cout<<"invalid Choice !!!";
			break;
		}
		
	}
}
