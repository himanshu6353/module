package core.Module1;

import java.util.Scanner;

public class P030try_catch {
	public static void main(String[] args) {
		try {
			int a,b;
			
			double div;
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter A::" );
			a=sc.nextInt();
			System.out.println("Enter B::");
			b=sc.nextInt();
			div =a/b;
			System.out.println("Division of a and b is ::" + div);
		} catch (ArithmeticException e) {
			// TODO: handle exception
			System.out.println("Division with O is not possible");
		}
		finally {
			System.out.println("This is final block, run after try catch  ");
		}
	}
}
