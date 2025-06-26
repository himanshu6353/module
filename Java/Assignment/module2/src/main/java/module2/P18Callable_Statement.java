package module2;


import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Types;

public class P18Callable_Statement {
	public static void main(String[] args) {
		String url = "jdbc:mysql://localhost:3306/module2";
        String user = "root"; 
        String password = "";
        
        int emp_id = 101;
        try (Connection conn = DriverManager.getConnection(url, user, password)) {
        	String sql = "{call GetEmployeeFullName(?, ?)}"; 
            
            try (CallableStatement stmt = conn.prepareCall(sql)) {

            	stmt.setInt(1, emp_id);

                stmt.registerOutParameter(2, Types.VARCHAR); 

                stmt.execute();
                
                String fullName = stmt.getString(2);

                if (fullName == null) {
                    fullName = "Not Found";
                }

                System.out.println("Employee Full Name: " + fullName);
            }
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
