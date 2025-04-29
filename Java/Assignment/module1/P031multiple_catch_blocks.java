package core.Module1;

import java.util.InputMismatchException;
import java.util.Scanner;

public class P031multiple_catch_blocks {
	public static void main(String[] args) {
		int a,b,div;
		try {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter a ::");
			a=sc.nextInt();
			System.out.println("Enter b ::");
			b=sc.nextInt();
			div=a/b;
			System.out.println("Division of A and B is  ::" + div);
		} catch (ArithmeticException e) {
			// TODO: handle exception
			System.out.println("Value should be greater than 0 ");
		}
		catch (InputMismatchException e) {
			// TODO: handle exception
			System.out.println("value should be number only");
		}
		catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		finally {
			System.out.println("Thank you");
		}
	}

}
