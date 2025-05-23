package Connection;

import java.sql.Connection;
import java.sql.DriverManager;

public class DBConnection {
	public static Connection createConnection()
	{
		Connection conn =null;
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/Hospital", "root", "");
		} catch (Exception e) {
			// TODO: handle exception
					e.printStackTrace();
		}
		return conn;
	}
}
