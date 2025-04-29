package core.Module1;

class Employee{
	
	private int id;
	private String name;
	Employee(int id, String name)
	{  
		super();
		this.id=id;
		this.name=name;
	}
	public void setid(int id)
	{
		this.id=id;
	}
	public int getid()
	{
		return id;
	}
	public void setname(String name)
	{
		this.name=name;
		
	}
	public String getname()
	{
		return name;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return " id ::" + id + " name ::" + name ;
				
	}
}
public class P010getter_setter {
	public static void main(String[] args) {
		
		Employee obj=new Employee(1, "himanshu");
		obj.setid(2);
		obj.setname("ramesh");
	
		System.out.println(obj.getid());
		System.out.println(obj.getname());
		Employee obj2 = new Employee(3, "ram");
		System.out.println(obj2);
		
	}
}