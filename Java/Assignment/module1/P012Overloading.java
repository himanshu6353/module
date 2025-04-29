package core.Module1;

class overloading{
	
	public void sum(int a,int b)
	{
		System.out.println("Addition is ::"+ (a+b));
	}
	public void sub(long a, long b)
	{
		System.out.println("Substrection is ::"+ (a-b));
	}
	public void multi(double a, double b)
	{
		System.out.println("Multiplication is ::"+ (a*b));
	}
	public void div(float a, float b)
	{
		System.out.println("Division is ::"+ (a/b));
	}
}
public class P012Overloading {
	public static void main(String[] args) {
		overloading obj=new overloading();
		obj.sum(19, 19);
		obj.sub(17, 7);
		obj.multi(5, 5);
		obj.div(20, 2);
	}

}
