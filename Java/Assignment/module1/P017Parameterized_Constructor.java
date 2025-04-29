package core.Module1;

class Const{
	int id;
	String name;
	public Const(int id, String name)
	{
		this.id=id;
		this.name=name;
	}
	public void fun()
	{
		System.out.println("ID ::" + id);
		System.out.println("Name ::" + name);
	}
}
public class P017Parameterized_Constructor {
	public static void main(String[] args) {
		Const obj =new Const(1, "Java");
		obj.fun();
		
	}
}
