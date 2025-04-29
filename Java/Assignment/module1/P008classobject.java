package core.Module1;

class Student{
	
	private String name;
	private int age;
	
	Student(String name,int age)
	{
		this.name=name;
		this.age=age;
		
	}
	public void attribute()
	{
		System.out.println("Student name::"+ name);
		System.out.println("Student age:: " + age);
	}
}
public class P008classobject {
	public static void main(String[] args) {
		Student obj=new Student("Bhuvish", 15);
		Student obj1=new Student("priyshi", 20);
		obj.attribute();
		obj1.attribute();
		
		
	}
}
