package core.Module1;

import java.util.Scanner;

public class P005oddeven {
	public static void main(String[] args) {

		
		Scanner abc = new Scanner(System.in);
		System.out.println("Enter Value :");
		int a = abc.nextInt();
		if (a == 0) {
			System.out.println("Number is even.");
		} else if (a % 2 == 0) {
			System.out.println("Number is even  ");
		} else {
			System.out.println("Number is odd.");
		}

	}

}
