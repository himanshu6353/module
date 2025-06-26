package module2;

import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.DriverManager;
import java.sql.SQLException;

public class P12SQL_features {
public static void main(String[] args) {
        
        String url = "jdbc:mysql://localhost:3306/module2"; 
        String username = "root";  
        String password = "";    

        Connection conn = null;

        try {
         
            conn = DriverManager.getConnection(url, username, password);
            System.out.println("Connected to the database!");

           
            DatabaseMetaData metaData = conn.getMetaData();

           
            System.out.println("Database Name: " + metaData.getDatabaseProductName());
            System.out.println("Database Version: " + metaData.getDatabaseProductVersion());

        } catch (SQLException e) {
            System.out.println("Error: " + e.getMessage());
        } 
        
    }

}
