package core.Module1;

public class P004TypeCasting {
	public static void main(String[] args) {
					//implicit type casting 
		int a= 20;
		double b=a;
		System.out.println("int a::"+a);
		System.out.println("double b::"+b);
					//Explicit type casting
		double x=100;
		int z=(int)x;
		System.out.println("double x::"+x);
		System.out.println("int z::"+z);
	}
}
