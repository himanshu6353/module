package core.Module1;

import java.util.Scanner;

public class P003Calculater {
	public static void main(String[] args) {
		
		int a,b;
		char ch;
		float total=0;
		Scanner sc=new Scanner(System.in);
		
			System.out.print("Enter Value of A::");
			a=sc.nextInt();
			System.out.print("Enter Value of B::");
			b=sc.nextInt();
			System.out.print("Enter your Choice (+, -, *, /, %)::");		//Enter choice for Calculate
			ch=sc.next().charAt(0);
		
	
				switch(ch)			//Give option for Calculate value
				{
				case'+':	
				{ 
					total=a+b;
					System.out.println("Addition of A and B is ::"+total);
					break;
				}
				case'-':
				{
					total=a-b;
					System.out.println("Substrection of A and B is ::"+total);
					break;
				}
				case'*':
				{
					total=a*b;
					System.out.println("Mltiplication of A and B is::"+total);
					break;
				}
				case'/':
				{
					if(b==0)
					{
						System.out.println("0 is not Divisable");
					}
					else
					{
					total=a/b;
					System.out.println("Division od A and B is::"+total);

					}
					break;
				}
				case'%':
				{
					if(b==0)
					{
						System.out.println("Not Allow");
					}
					else
					{
						total=a%b;
						System.out.println("Per of A and B is::"+total);
					}
					break;
				}
				default:
				{
					System.out.println("Invalid chice!!!");
					break;
				}
				
				}
	}
	
	}
	
