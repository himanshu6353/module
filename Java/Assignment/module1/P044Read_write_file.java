package core.Module1;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class P044Read_write_file {
			public static void main(String[] args) throws IOException {
				 String t1 = "t1.txt";
			        String t3 = "t3.txt";

			       
			        FileReader fr = new FileReader(t1);
			        FileWriter fw = new FileWriter(t3);
			        
			        int data;
			        while ((data = fr.read()) != -1) {
			            fw.write(data);
			        }
			        
			        fr.close();
			        fw.close();
			        
			        System.out.println("done");
			}
}
