package core.Module1;

import java.util.Scanner;

class max{
	int a,b,c;
	public void MaxNo()
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter number of A:: ");
		a = sc.nextInt();
		System.out.println("Enter number of B:: ");
		b = sc.nextInt();
		System.out.println("Enter number of C:: ");
		c = sc.nextInt();
		
		if(a >= b && a >= c)
		{
			System.out.println("A is greter Number");
		}
		else if(b >=a && b >= c )
		{
			System.out.println("B is greter Number");
		}
		else
		{
			System.out.println("C is greter Number ");
		}
	}
	
}
public class P011max_number {
	public static void main(String[] args) {
		
		max obj =new max();
		obj.MaxNo();
		
		
	}

}
