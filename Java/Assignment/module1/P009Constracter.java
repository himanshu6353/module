package core.Module1;
	
class Students{
	 
	Students(int a,int b)
	{
		System.out.println("Hello this is Constructer");
		System.out.println( a+b);
		
	}
	Students(int c, int d, int multi)
	{
		multi=c*d;
		System.out.println("this is overloding using diffrent perameter ");
		System.out.println("Multiplecation of c and d is ::"+multi);
	}
	Students(String i)
	{
		System.out.println("Change datatype for overloding");
		System.out.println(i);
	}
}
public class P009Constracter {
	public static void main(String[] args) {
		Students obj= new Students(44, 12);
		Students obj1= new Students(5, 7, 0);
		Students obj2= new Students("Hello Java");
		
	}
}
