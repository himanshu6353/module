package core.Module1;


class StaticMethod{
	
	public static int a;
	public static void z()
	{
		System.out.println("Hello java");
		a++;
	}
	public static void b()
	{
		System.out.println("Hello python");
		a++;
	}
	public static void c()
	{
		System.out.println("Hello php");
		a++;
	}
	public static void d()
	{
		System.out.println("Hello c");
		a++;
	}
	public static void fun()
	{
		System.out.println(a);
	}
}
public class P013Static_function {
	public static void main(String[] args) {
		StaticMethod.z();
		StaticMethod.b();
		StaticMethod.c();
		StaticMethod.d();
		StaticMethod.fun();
		
		
		
	}
}
