package core.Module1;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;

public class P043CopyFile {
		public static void main(String[] args) throws IOException {
			String t1 ="t1.txt";
			String t2 = "t2.txt";
			FileInputStream fis = new FileInputStream(t1);
			FileOutputStream fos = new FileOutputStream(t2);
			
			int data;
			while((data = fis.read()) != -1)
			{
				fos.write(data);
			}
			
			fis.close();
			fos.close();
			System.out.println("Done");
			
		}
}
