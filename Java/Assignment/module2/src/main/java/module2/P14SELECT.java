package module2;

import java.sql.*;

public class P14SELECT {
    public static void main(String[] args) {

        String url = "jdbc:mysql://localhost:3306/module2";
        String username = "root";
        String password = "";

        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            
            Class.forName("com.mysql.cj.jdbc.Driver");

            conn = DriverManager.getConnection(url, username, password);
            System.out.println("Connected to the database!");

            stmt = conn.createStatement();
            rs = stmt.executeQuery("SELECT * FROM users WHERE id = 1");

            ResultSetMetaData metaData = rs.getMetaData();
            int columnCount = metaData.getColumnCount();

            System.out.println("Number of columns: " + columnCount);
            for (int i = 1; i <= columnCount; i++) {
                String columnName = metaData.getColumnName(i);
                String columnType = metaData.getColumnTypeName(i);
                System.out.println("Column " + i + ": " + columnName + " (Type: " + columnType + ")");
            }

        } catch (ClassNotFoundException e) {
            System.out.println("MySQL JDBC Driver not found.");
        } catch (SQLException e) {
            System.out.println("SQL Error: " + e.getMessage());
        }
    }
}

