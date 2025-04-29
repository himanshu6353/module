package core.Module1;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class P037BufferedReader {
	public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new FileReader("a.txt"));

        String line;
        while ((line = reader.readLine()) != null) {
            System.out.println(line);
        }

        reader.close();
	}
}
