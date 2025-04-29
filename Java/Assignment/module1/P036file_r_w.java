package core.Module1;


import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class P036file_r_w {
	public static void main(String[] args) throws IOException {
		String t1 = "t1.txt";
		FileWriter fw = new FileWriter(t1);
		fw.write("Hy I am Himanshu Rajpurohit");
		fw.write("This if first file created");
		fw.close();
		System.out.println("done");
		
		FileReader fr = new FileReader(t1);
		int data;
		while((data = fr.read()) != -1)
		{
			System.out.print((char) data);
		}
		fr.close();
		
	}
}
