package core.Module1;

import java.util.Scanner;

class Polymorphism{
	int a,b;
	Scanner sc=new Scanner(System.in);
	public void fun() {
		
		System.out.println("Enter A ::");
		a = sc.nextInt();
		System.out.println("Enter B ::");
		b = sc.nextInt();
	}
}
class Poly extends Polymorphism{
	
	public void fun()
	{
		super.fun();
		if(a>b)
		{
			System.out.println("A is greter");
		}
		else if(a==b)
		{
			System.out.println("Both are equal");
		}
		else
		{
			System.out.println("B is greter");
		}
	}
}
public class P016Polymorphism {
	public static void main(String[] args) {
		Polymorphism obj =new Poly();
		obj.fun();
	}
}
