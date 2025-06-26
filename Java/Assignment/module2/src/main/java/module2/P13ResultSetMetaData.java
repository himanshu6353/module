package module2;

import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.sql.SQLException;

public class P13ResultSetMetaData {
	public static void main(String[] args) {
	       
        String url = "jdbc:mysql://localhost:3306/module2"; 
        String username = "root";  
        String password = "";   
        

        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            conn = DriverManager.getConnection(url, username, password);
            System.out.println("Connected to the database!");

            stmt = conn.createStatement();
            rs = stmt.executeQuery("SELECT * FROM users"); 
            
            ResultSetMetaData metaData = rs.getMetaData();

            int columnCount = metaData.getColumnCount();
            System.out.println("Number of columns: " + columnCount);

            for (int i = 1; i <= columnCount; i++) {
                String columnName = metaData.getColumnName(i);
                String columnType = metaData.getColumnTypeName(i);
                System.out.println("Column " + i + ": " + columnName + " (Type: " + columnType + ")");
            }

        } catch (SQLException e) {
            System.out.println("Error: " + e.getMessage());
        } 
    }

}
