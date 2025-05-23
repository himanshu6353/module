package Dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import Connection.DBConnection;
import Model.Patient;

public class PatientDao {
	
	public static boolean checkemail(String pat_email)
	{
		boolean flag = false;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from patient where pat_email=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, pat_email);
			ResultSet rs = pst.executeQuery();
			if(rs.next())
			{
				flag = true;
			}
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return flag;
		
	}
	
	
	public static Patient insertpatientdata(Patient p)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "insert into patient (pat_name,pat_contact,pat_address,pat_email,pat_password) values (?,?,?,?,?)";		
			PreparedStatement pst = conn.prepareStatement(sql);			
			pst.setString(1, p.getPat_name());
			pst.setLong(2, p.getPat_contact());
			pst.setString(3, p.getPat_address());
			pst.setString(4, p.getPat_email());
			pst.setString(5, p.getPat_password());
			pst.executeUpdate();
			System.out.println("data insert");
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return p;
	}
	public static Patient patientlogin(Patient u)
	{
		Patient p = null;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from patient where pat_email=? and pat_password=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, u.getPat_email());
			pst.setString(2, u.getPat_password());
			ResultSet rs = pst.executeQuery();
			if(rs.next())
			{
			     p = new Patient();
				 p.setPat_id(rs.getInt("pat_id"));
				 p.setPat_name(rs.getString("pat_name"));
				 p.setPat_contact(rs.getLong("pat_contact"));
				 p.setPat_address(rs.getString("pat_address"));
				 p.setPat_email(rs.getString("pat_email"));
				 p.setPat_password(rs.getString("pat_password"));
			}
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
			
		}
		return p;
	
		
	}
	public static void patientdataupdate(Patient p)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update patient set pat_name=?,pat_contact=?,pat_address=?,pat_email=? where pat_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, p.getPat_name());
			pst.setLong(2, p.getPat_contact());
			pst.setString(3, p.getPat_address());
			pst.setString(4, p.getPat_email());
			pst.setInt(5, p.getPat_id());
			pst.executeUpdate();
			System.out.println("data update");
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
	}
	public static void changepassword(int pat_id, String pat_np)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update patient set pat_password=? where pat_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, pat_np);
			pst.setInt(2, pat_id);
			pst.executeUpdate();
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	public static boolean checkoldpassword(int pat_id, String pat_op)
	{ 
			boolean flag=false;
		try {
					Connection conn = DBConnection.createConnection();
					String sql = "select * from patient where pat_password=? and pat_id=?";		
					PreparedStatement pst = conn.prepareStatement(sql);
					pst.setString(1, pat_op);
					pst.setInt(2, pat_id);
					ResultSet rs = pst.executeQuery();
					if(rs.next())
					{
						flag = true;
					}
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		return flag ;
	}
	public static void newpassword(String pat_email, String np)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update patient set pat_password=? where pat_email=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, np);
			pst.setString(2, pat_email);
			pst.executeUpdate();
			System.out.println("password change");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	public static Patient getpatientByPid(int pat_id) {
		Patient d = null;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from patient where pat_id=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, pat_id);
			ResultSet rs = pst.executeQuery();
			if (rs.next()) {
				d = new Patient();
				d.setPat_id(rs.getInt("pat_id"));
				d.setPat_name(rs.getString("pat_name"));
				d.setPat_contact(rs.getLong("pat_contact"));
				d.setPat_address(rs.getString("pat_address"));
				d.setPat_email(rs.getString("pat_email"));
				d.setPat_password(rs.getString("pat_password"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return d;
	}
	
	
}
