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
class B{
	public:
		int b;
		fun1(){
			cout<<"Enter number::";
			cin>>b;
		}
		
};
class C:public A,public B{
	public:
		int total;
		
		fun3(){
			total=a+b;
			cout<<"Total is::"<<total;
			
		}
		
};
main(){
		C obj;
		obj.fun();
		obj.fun1();
		obj.fun3();
}
