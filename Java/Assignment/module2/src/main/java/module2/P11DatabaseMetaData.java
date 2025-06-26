package module2;

import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.DriverManager;
import java.sql.SQLException;

public class P11DatabaseMetaData {
	public static void main(String[] args) {
	     
        String url = "jdbc:mysql://localhost:3306/module2"; 
        String username = "root";
        String password = "";      

        Connection conn = null;

        try {
            
            conn = DriverManager.getConnection(url, username, password);
            System.out.println("Connected to the database!");

            DatabaseMetaData dbMetaData = conn.getMetaData();

            System.out.println("Database Product Name: " + dbMetaData.getDatabaseProductName());
            System.out.println("Database Product Version: " + dbMetaData.getDatabaseProductVersion());
            System.out.println("Driver Name: " + dbMetaData.getDriverName());
            System.out.println("Driver Version: " + dbMetaData.getDriverVersion());

        } catch (SQLException e) {
            System.out.println("Error: " + e.getMessage());
        } 
    }

}
