package core.Module1;

import java.util.Scanner;

//Write a program to display the Fibonacci series using a loop.
public class P007fibonacchi {
	public static void main(String[] args) {
		int i,a,n1=1,n2=2,n3;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number for fibonacchi series ::  ");
		a=sc.nextInt();
		System.out.println(n1);
		System.out.println(n2);
		for(i=3;i<=a;i++)
		{
			n3=n1+n2;
			System.out.println(n3);
			n1=n2;
			n2=n3;
		}
		
		
	}

}
