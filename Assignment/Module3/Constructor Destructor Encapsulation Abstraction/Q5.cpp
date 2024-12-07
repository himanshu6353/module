#include<iostream>
using namespace std;
class Triangle{
	private:
		int side1,side2,side3;		//using private datatype
	public:
		fun()
		{
				
				cout<<"Enter side 1::";	//take user input
				cin>>side1;
				cout<<"Enter side 2::";
				cin>>side2;
				cout<<"Enter side 3::";
				cin>>side3;
			if(side1==side2 && side2==side3)	//for  equilateral
			{
				cout<<"Triangle is equilateral!!";
			}
			else if(side1==side2 && side2==side3 && side3==side1)	//for isosceles
			{
				cout<<"Triangle is isosceles!!";
			}
			else if(side1!=side2 &&side2!=side3 && side3!=side1)	//for scalene
			{
				cout<<"triangle is scalene!!";
			}
			else
			{
				cout<<"Invalid value!!!";
			}
		}
		
};



main()
{
		Triangle obj;


	obj.fun();
	
	
}
