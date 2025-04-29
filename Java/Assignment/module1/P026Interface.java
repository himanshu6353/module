package core.Module1;

interface teacher{
	
	public void name();
	public void subject();
}
interface class_student{
	
	public void subjects();
	public void classes();
	
}
class ABC implements teacher,class_student{
	public void name()
	{
		System.out.println("Teacher name :: Kamlesh sir");
		
	}
	public void subject()
	{
		System.out.println("Subject of kamlesh sir is :: Maths");
	}
	public void subjects()
	{
		System.out.println("Subject of student is :: science");
	}
	public void classes() {
		System.out.println("Student class is :: 11th");
	}
	
}
public class P026Interface {
		public static void main(String[] args) {
			ABC obj = new ABC();
			obj.name();
			obj.subject();
			obj.subjects();
			obj.classes();
		}
}
