package core.Module1;

import java.util.Scanner;

class sty {
    Scanner sc = new Scanner(System.in);
    int math, sci, eng, roll_no;
    String name;

    public sty() {
        System.out.println("Enter name ::");
        name = sc.nextLine();
        System.out.println("Enter roll no. ::");
        roll_no = sc.nextInt();
        sc.nextLine(); // Consume the newline character left by nextInt()
    }

    public void detail() {
        System.out.println("Enter math marks ::");
        math = sc.nextInt();
        System.out.println("Enter science marks ::");
        sci = sc.nextInt();
        System.out.println("Enter English marks ::");
        eng = sc.nextInt();
    }
}

class Detail extends sty {

    public Detail() {
        super(); // Explicitly call the parent class constructor (optional, as it's implicit)
        System.out.println("Enter Marks of subjects");
    }

    public void detail() {
        super.detail(); // Call the parent class method to input marks
        System.out.println("________________________________________________________________________________________");
        System.out.println("Name is ::" + name);
        System.out.println("Roll Number is ::" + roll_no);
        System.out.println("Math marks ::" + math);
        System.out.println("Science marks ::" + sci);
        System.out.println("English marks ::" + eng);
    }
}

public class P024Super_Keyword {
	public static void main(String[] args) {
		Detail obj = new Detail();
		obj.detail();
	}

}
