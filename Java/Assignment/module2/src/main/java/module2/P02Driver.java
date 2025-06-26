package module2;

import java.sql.Connection;
import java.sql.DriverManager;

public class P02Driver {
	public static void main(String[] args) {
		Connection conn =null;
		try {
			//this is driver 
			Class.forName("com.mysql.cj.jdbc.Driver");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/module2", "root", "");//add database name
			System.out.println("Connection Complete");//Connection Complete messages
		} catch (Exception e) {
			// TODO: handle exception
					e.printStackTrace();
				
		}
	}

}
