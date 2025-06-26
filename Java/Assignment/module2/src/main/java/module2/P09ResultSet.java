package module2;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class P09ResultSet {
	 public static void main(String[] args) {
	        String url = "jdbc:mysql://localhost:3306/module2";  
	        String username = "root"; 
	        String password = "";      

	        try {
	            Connection conn = DriverManager.getConnection(url, username, password);
	            System.out.println("Connected to the database");

	            String selectQuery = "SELECT id, name, contact, email FROM users";  

	            Statement stmt = conn.createStatement();
	            
	            ResultSet rs = stmt.executeQuery(selectQuery);

	            
	            System.out.println("User Records:");
	            while (rs.next()) {
	                int id = rs.getInt("id");       
	                String name = rs.getString("name"); 
	                Long contact = rs.getLong("contact");
	                String email = rs.getString("email");

	                System.out.println("ID: " + id + ", Name: " + name +", Contact: "+ contact + ", Email: " + email);
	            }

	            

	        } catch (SQLException e) {
	           
	            System.out.println("Error: " + e.getMessage());
	        }
	    }

}
