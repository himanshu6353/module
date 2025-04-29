package core.Module1;

public class P029Access_modifiers {
		private int id=1;
		int roll_no=301;
		protected String name="Himanshu";
		public String Add="Ahmadabad";
		
		public void fun()
		{
			System.out.println("id ::" + id);
			System.out.println("Roll_no ::" + roll_no);
			System.out.println("Name ::" + name);
			System.out.println("Address ::" + Add);
		}
}
