package module2;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class P08CRUD_operations {
	public static void main(String[] args) {
		String url = "jdbc:mysql://localhost:3306/module2";  
        String username = "root";  
        String password = "";      
        
        try {
			Connection conn = DriverManager.getConnection(url, username, password);
			System.out.println("Connected to Database");

            String insertSql = "INSERT INTO users (name,contact, email) VALUES (?, ?, ?)";
            PreparedStatement insertStmt = conn.prepareStatement(insertSql);
            insertStmt.setString(1, "prince");  
            insertStmt.setLong(2, 987564857);
            insertStmt.setString(3, "pr12@example.com");  
            insertStmt.executeUpdate(); 
            System.out.println("Inserted new user into users table");

            String updateSql = "UPDATE users SET name = ? , email = ? WHERE id = ?";
            PreparedStatement updateStmt = conn.prepareStatement(updateSql);
            updateStmt.setString(1, "prince rajpuroit");
            updateStmt.setString(2, "pr12@example.com"); 
            updateStmt.setInt(3, 5);  
            updateStmt.executeUpdate();  
            System.out.println("Updated data in users table");

            String selectSql = "SELECT * FROM users WHERE id = ?";
            PreparedStatement selectStmt = conn.prepareStatement(selectSql);
            selectStmt.setInt(1, 5); 
            ResultSet rs = selectStmt.executeQuery(); 
            while (rs.next()) {

                System.out.println("ID: " + rs.getInt("id") + ", Name: " + rs.getString("name") + ", Email: " + rs.getString("email"));
            }

            String deleteSql = "DELETE FROM users WHERE id = ?";
            PreparedStatement deleteStmt = conn.prepareStatement(deleteSql);
            deleteStmt.setInt(1, 5);  
            deleteStmt.executeUpdate();  
            System.out.println("Deleted data from users table");

           
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
