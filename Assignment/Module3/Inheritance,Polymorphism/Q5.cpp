#include<iostream>
using namespace std;
class Students{
	public:
		int rollno;
		fun()
		{
		cout<<"Enter Your roll number::";
		cin>>rollno;
		}
		
};
class marks:public Students{
	public:
		int math,sci;
		fun1()
		{
		cout<<"Enter your maths marks::";
		cin>>math;
		cout<<"Enter your science marks::";
		cin>>sci;
		}
};
class result:public marks{
	public:
		int total;
		fun2()
		{
			total=math+sci;
			cout<<"Your roll Number is::"<<rollno<<endl;
			cout<<"Your marks of maths is::"<<math<<endl;
			cout<<"Your marks of science is::"<<sci<<endl;
			cout<<"Total is::"<<total;
		}
		 
};


main()
{
	result obj;
	obj.fun();
	obj.fun1();
	obj.fun2();
}
