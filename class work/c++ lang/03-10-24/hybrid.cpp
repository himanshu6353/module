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
class C{
	public:
		int total;
		
		fun3(){
				cout<<"-----------------------------------------------"<<endl;
			
		}
		
};
class D:public B,public C{
	public:
	
		
		fun4(){
			total=a+b;
			cout<<"Total is::"<<total;
			
		}
		
};
main(){
		D obj;
		obj.fun();
		obj.fun1();
		obj.fun3();
		obj.fun4();
}
