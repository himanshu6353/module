package core.Module1;

import java.util.Scanner;

public class P042Scanner {
		public static void main(String[] args) {
			Scanner sc =new Scanner(System.in);
			int age;
			String name;
			System.out.println("Enter your name ::");
			name=sc.next();
			System.out.println("Enter your Age ::");
			age = sc.nextInt();
			System.out.println("Your name is -> "+name);
			System.out.println("Your age is -> "+age);
		}
}
