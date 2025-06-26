package module2;

import java.sql.Connection;
import java.sql.DriverManager;

public class P03Driver_name {
	public static void main(String[] args) {
		Connection conn =null;
		try {
			//this is driver we use in MySQL
			Class.forName("com.mysql.cj.jdbc.Driver");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/module2", "root", "");
			System.out.println("Connection Complete");
		} catch (Exception e) {
			// TODO: handle exception
					e.printStackTrace();
				
		}
	}

}
