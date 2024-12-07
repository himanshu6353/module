#include<iostream>
using namespace std;
class Date{
	private:
		int day,month,year,maxday;
	public:	
		get()	//take user input
		{
			cout<<"Enter day::";
			cin>>day;
			cout<<"Enter month ::";
			cin>>month;
			cout<<"Enter year::";
			cin>>year;
		}
		set()
		{
			cout<<"date is::"<<day;
			cout<<"/"<<month;
			cout<<"/"<<year<<endl;
						
		}
		validate()
		{
			if(year>=1 && month>=1&&month<=12)	//Condition for 12 Month
			{
				maxday=31;
				if(month==4||month==6||month==9||month==11)	
				{
					maxday=30;                                                       
				}
				else if(month==2)		//condition for 2ed Month
				{
					if((year%4==0&&year%100!=0)||(year%400==0))	//condition for lip year
					{
						maxday=29;
						
					}
					else
					{
						maxday=28;
					}
				}
				if(day>=1&&day<=maxday)
				{
					cout<<"The date is valid  ";
				}
				else
				{
					cout<<"the date is invalid ";
				}
			}
		}
		
};



main()
{
	Date obj;
	obj.get();
	obj.set();
	obj.validate();
}
