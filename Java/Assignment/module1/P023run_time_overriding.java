package core.Module1;

class Animal{
	
	public void fun() {
		System.out.println("this is perent class of Animal");
	}
}
class dog extends Animal{
	
	public void fun() {
		super.fun();
		System.out.println("this is overriding class Dog");
	}
}
class cat extends Animal{
	
	public void fun() {
		System.out.println("this is overriding class Cat");
	}
}
public class P023run_time_overriding {
		public static void main(String[] args) {
			dog d= new dog();
			d.fun();
			cat c = new cat();
			c.fun();
		}
}
