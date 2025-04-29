package core.Module1;

import java.util.Scanner;

public class P021Compare_String {
		public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter String 1 ::");
			String s1 = sc.nextLine();
			System.out.println("Enter String 2 ::");
			String s2 = sc.nextLine();
			
			if(s1.equals(s2)) {
				System.out.println("String is equal");
			}
			else
			{
				System.out.println("String is not equal");
			}
			System.out.println(s1.compareTo(s2));
			
		}
}
