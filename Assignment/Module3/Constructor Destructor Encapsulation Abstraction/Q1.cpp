#include<iostream>
using namespace std;



		inline int multi(int a,int b)	//using inline function, find multiplication value
		{
			return a*b;
		}
		inline int cube(int x)		//find cube value
		{
			return x*x*x;
		}
main()
{
	int a,b,x;
	cout<<"Enter A::";	//take user input
	cin>>a;
	cout<<"Enter B::";
	cin>>b;
	cout<<"total is::"<<multi(a,b)<<endl;
	cout<<"Enter number for find cube ::";
	cin>>x;
	cout<<"Cube is::"<<cube(x);
}
