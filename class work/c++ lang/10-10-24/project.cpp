#include<iostream>
using namespace std;
class Array{
	public:
		int a[5],i,des,j;
		desc()
		{
			for(i=0;i<5;i++)
		{	
			
			cout<<"Enter number ::";
			cin>>a[i];
			
		}
		for(i=0;i<5;i++)
		{	
			for(j=i+1;j<5;j++)
			{
				if(a[i]<a[j])
				{
					des=a[i];
					a[i]=a[j];
					a[j]=des;
				}
			}
		}
		for(i=0;i<5;i++){
			cout<<"desc array is::"<<a[i]<<endl;
		}
		}
		
	
};
class str{
	public:
		string name,name1,concat;
		con(){
			cout<<"Enter name 1::";
			cin>>name;
			cout<<"Enter name 2::";
			cin>>name1;
			concat=name+name1;
			cout<<"concat of string is::"<<concat<<endl;
			
		}
};
class reverse{
	public:
	int a,b,rev=0,i;
	fun()
	{
		cout<<"Enter number::";
		cin>>a;
	}
	fun1(int x)
	{
		while(a!=0)
		{
			b=a%10;
			rev=rev*10+b;
			a=a/10;
		}
		cout<<"reverse number is::"<<rev<<endl;
	}
};
class prime:public reverse{
	public:
		int i,c;
		fun()
		{
			reverse::fun();
			for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		cout<<"number is prime"<<endl;
	}
	else
	{
		cout<<"number is not prime"<<endl;
	}
			
		}
		
};


main()
{
	while(1)
		{
			int ch;
			cout<<"press 1 for desc of array::"<<endl;
			cout<<"press 2 for concat of string::"<<endl;
			cout<<"press 3 for reverse number::"<<endl;			
			cout<<"press 4 for prime number::"<<endl;
			cout<<"press 5 for Exit::"<<endl;
			cout<<"Enter Your Choice::"<<endl;
			cin>>ch;
			if(ch==1)
			{
				Array obj;
				obj.desc();
			}
			else if(ch==2)
			{
					str obj1;
					obj1.con();	
			}
			else if(ch==3)
			{
					reverse obj2;
					obj2.fun();
					obj2.fun1(10);
			}
			else if(ch==4)
			{
				prime obj3;
				obj3.fun();
			}
			else if(ch==5)
			{
				cout<<"thanks ";
				break;
			}
			else
			{
				cout<<"Invelid choice"<<endl;
				break;
			}
		}
		

	

}
