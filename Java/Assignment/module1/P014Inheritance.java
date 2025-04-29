package core.Module1;

import java.util.Scanner;

class factorial{
	Scanner sc= new Scanner(System.in);
	int a;
	public void fun() {
		System.out.println("Enter Value for find facctorial ::");
		a = sc.nextInt();
	}
}
class fact extends factorial{
	int i,fac=1;
	public void fun() {
		super.fun();
		for(i=1;i<=a;i++)
		{
			fac *=i;
		}
		System.out.println("Factorial of " + a + " is ::" + fac);
	}
}
public class P014Inheritance {
	public static void main(String[] args) {
		fact obj =new fact();
		obj.fun();
	}
}
