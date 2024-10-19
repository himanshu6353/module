#include<iostream>
using namespace std;
class A{
	public:
		int a;
		fun(){
			cout<<"Enter number::";
			cin>>a;
		}
		
};
class B:public A{
	public:
		int b;
		fun1(){
			cout<<"Enter number::";
			cin>>b;
		}
		
};
class C:public A{
	public:
		int total;
		
		fun3(){
			total=a+b;
			cout<<"Total is::"<<total;
			
		}
		
};
main(){
		B obj;
		
		obj.fun();
		obj.fun1();
		C obj2;
		obj2.fun();	
		obj2.fun3();
}
