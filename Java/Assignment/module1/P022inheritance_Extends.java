package core.Module1;

class inherit{
	
	public void fun() {
		System.out.println("This is perent class");
	}
}
class child extends inherit{
	
	public void fun1() {
		
		System.out.println("This is child class  ");
	}
}
public class P022inheritance_Extends {
		public static void main(String[] args) {
			child ch = new child();
			ch.fun();
			ch.fun1();
		}
}
