package module2;

import java.sql.Connection;
import java.sql.DriverManager;

public class P04Best_driver {	
	public static void main(String[] args) {
		Connection conn =null;
		try {
			//this is best driver for MySQL database because its Official, regularly updated, high performance
			Class.forName("com.mysql.cj.jdbc.Driver");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/module2", "root", "");
			System.out.println("Connection Complete");
		} catch (Exception e) {
			// TODO: handle exception
					e.printStackTrace();
				
		}
	}
}
