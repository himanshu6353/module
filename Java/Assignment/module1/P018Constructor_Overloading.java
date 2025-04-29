package core.Module1;

class Employe{
	int id;
	String name;
	double salary;
	public Employe(int id)
	{
		this.id=id;
	
	}
	public Employe(String name)
	{
		this.name=name;
	}
	public Employe(double salary )
	{
		this.salary=salary;
	}
	public void fun()
	{
		System.out.println("ID ::"+ id);
		System.out.println("Name ::"+ name);
		System.out.println("Salary ::"+ salary);
	}
}
public class P018Constructor_Overloading {
	public static void main(String[] args) {
		Employe obj = new Employe(1);
		Employe obj1 = new Employe("Rahul");
		Employe obj2= new Employe(50000);
		obj.fun();
		
		obj1.fun();
		
		obj2.fun();
		
	}
}
