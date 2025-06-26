package module2;

import java.sql.Connection;
import java.sql.DriverManager;

public class P05Connect_database {
	public static void main(String[] args) {
		Connection conn =null;
		try {	
			Class.forName("com.mysql.cj.jdbc.Driver");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/module2", "root", "");
			System.out.println("Connection Complete");
		} catch (Exception e) {
			// TODO: handle exception
					e.printStackTrace();
				
		}
	}
}
