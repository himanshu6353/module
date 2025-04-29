package core.Module1;

import java.util.Scanner;

abstract class Find_area{
	 
	public  abstract void  AreaOfCircle();
}
class circle{
	Scanner sc =new Scanner(System.in);
	int r;
	double area,pi=3.14;
	public void AreaOfCircle()
	{
		System.out.println("Enter Redius ::");
		r=sc.nextInt();
		area=r*r*pi;
		System.out.println("area of circle is ::" + area);
	}
}
public class P025Abstract {
		public static void main(String[] args) {
			circle obj =new circle();
			obj.AreaOfCircle();
		}
}
