#include<iostream>
using namespace std;
class A{
	public:
		float pi=3.14;
		fun(int area,int l,int w)
		{
			//Rectangle
			cout<<"Enter length of area::";
			cin>>l;
			cout<<"Enter width of area::";
			cin>>w;
			area=l*w;
			cout<<"area of Rectangle is ::"<<area<<endl;
		}
		fun(float a,float b,float h)
		{
			cout<<"Enter base of Triangle::";
			cin>>b;
			cout<<"Enter height of Triangle::";
			cin>>h;
			a=0.5*b*h;
			cout<<"area of Triangle is::"<<a<<endl;
		}
		fun(int area,int r)
		{
			cout<<"Enter area of circle::";
			cin>>r;
			area=pi*r*r;
			cout<<"area of circle is::"<<area<<endl;
			
		}
};
main(){
	int area,l,w,r;
	float a,b,h;

	A obj;
	obj.fun(area,l,w);
	obj.fun(a,b,h);
	obj.fun(area,r);
}
