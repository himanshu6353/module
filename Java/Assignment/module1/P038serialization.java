package core.Module1;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class P038serialization {
	public static void main(String[] args) throws IOException {
		String msg ="hello java developers this is file handling";
		
		FileOutputStream fos = new FileOutputStream("t1.txt");
		byte[] b= msg.getBytes();
		fos.write(b);
		fos.flush();
		fos.close();
		System.out.println("done");
		
		FileInputStream fis = new FileInputStream("t1.txt");
		int i;
		while((i = fis.read())!=-1) {
			System.out.print((char)i);
		}
	}
}
