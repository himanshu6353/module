package module2;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class P07PreparedStatement {
	public static void main(String[] args) {
		String url = "jdbc:mysql://localhost:3306/module2";  
        String username = "root";  
        String password = "";      
        
        try {
			Connection conn = DriverManager.getConnection(url, username, password);
			
            String insertSql = "INSERT INTO user (name,contact, email) VALUES (?, ?, ?)";
            PreparedStatement insertStmt = conn.prepareStatement(insertSql);
            insertStmt.setString(1, "Himanshu");  
            insertStmt.setLong(2, 635346472);
            insertStmt.setString(3, "himanshu@example.com");  
            insertStmt.executeUpdate(); 
            System.out.println("Inserted data into user table");

            String updateSql = "UPDATE user SET name = ? WHERE id = ?";
            PreparedStatement updateStmt = conn.prepareStatement(updateSql);
            updateStmt.setString(1, "Himanshu Rajpurohit");  
            updateStmt.setInt(2, 4);  
            updateStmt.executeUpdate();  
            System.out.println("Updated data in user table");

            String selectSql = "SELECT * FROM user WHERE id = ?";
            PreparedStatement selectStmt = conn.prepareStatement(selectSql);
            selectStmt.setInt(1, 4); 
            ResultSet rs = selectStmt.executeQuery();
            while (rs.next()) {
                System.out.println("ID: " + rs.getInt("id") + ", Name: " + rs.getString("name") + ", Email: " + rs.getString("email"));
            }
            String deleteSql = "DELETE FROM user WHERE id = ?";
            PreparedStatement deleteStmt = conn.prepareStatement(deleteSql);
            deleteStmt.setInt(1, 1);  
            deleteStmt.executeUpdate();  
            System.out.println("Deleted data from user table");

		} catch (Exception e) {
				e.printStackTrace();
		}
	}

}
