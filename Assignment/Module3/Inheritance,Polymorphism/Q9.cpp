//Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class add{
	public:
		string str1,str2;
		add(string a,string b)
		{
			str1=a;
			str2=b;
		}
		add operator+(add &obj)
		{
			add sum;
			sum.str1=str1+obj.str1;
			return sum;
		}
		print()
		{
			cout<<"merge of string is::"<<str1;
		}
		
};
main()
{
	add I1("himanshu"),I2("rajpurohit");
	add I3=I1+I2;
	I3.printf();

}
