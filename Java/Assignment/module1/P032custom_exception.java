package core.Module1;

import java.util.Scanner;

class InvalidAge extends Exception{
	public InvalidAge(String msg)
	{
		super(msg);
	}
	
}


	
	

public class P032custom_exception {
		

		public static void main(String[] args) throws InvalidAge {
		
			
		try {
			int age = 16;
			if(age < 18)
			{
				throw new InvalidAge("Age is less then 18");
			}
			else
			{
				System.out.println("You are 18+");
			}
			
		} catch (InvalidAge e) {
			// TODO: handle exception
			System.out.println(e.getMessage());
			
		}
			
		}

}
