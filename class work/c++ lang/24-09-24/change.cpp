#include<iostream>
using namespace std;

main()
{
	int a,rem,rev=0;
	cout<<"Enter value::";
	cin>>a;
	
	while(a!=0)
	{
		rem =a%10;
		rev = rev*10+rem;
		a = a/10;
	}
	cout<<"reverse number::"<<rev;
}
