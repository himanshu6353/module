#include<iostream>
using namespace std;
class LectureDetails{
	public:
		string lecturerName;  // Name of the lecturer
    	string subjectName;    // Name of the subject
    	string courseName;     // Name of the course
		int a;
		initial()
		{
			cout<<"Enter name of lecturer::";
			cin>>lecturerName;
			cout<<"Enter name of Subject::";
			cin>>subjectName;
			cout<<"Enter name of course::";
			cin>>courseName;
			cout<<"Enter number of lecturers::";
			cin>>a;	
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
