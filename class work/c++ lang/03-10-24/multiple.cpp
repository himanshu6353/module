#include<iostream>
using namespace std;
class A{
	protected:
			string a,b;
		fun()
		{
		
			cout<<"Enter your name::";
			cin>>a;
			cout<<"Enter your roll No.::";
			cin>>b;
		}
		
};
class B:public A{
		protected:
		int eng,math,sci;
		fun1()
		{
			
			cout<<"Enter your Math number::100=";
			cin>>math;
			cout<<"Enter your science Number::100=";
			cin>>sci;
			cout<<"Enter your English Number::100=";
			cin>>eng;
		}
		
};
class C:public B{
	protected:
			int total;
			float avg=0.0,ab;
		fun2()
		{
		
			total=eng+math+sci;
			cout<<"Total number of all subject is::300="<<total<<endl;
			
			avg=total/3;
			cout<<"avg of number is::"<<avg;
			
		}
		
};

main()
{
	C obj;
	obj.fun();
	obj.fun1();
	obj.fun2();
	
}
