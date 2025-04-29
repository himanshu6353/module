package core.Module1;

class Base{
	
	public void fun()
	{
		System.out.println("This is perent class");
	}
}
class Single_level extends Base{
	
	public void fun1() {
		
		System.out.println("This is single level inheritance");
	}
	
}
class Multilevel extends Single_level{
	
	public void fun2() {
		System.out.println("This is multilevel Inheritance");
	}
}
public class P015Multilevel_Inheritans {
	public static void main(String[] args) {
		Multilevel obj =new Multilevel();
		obj.fun();
		obj.fun1();
		obj.fun2();
	}
}
