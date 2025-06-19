package Dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import Connection.DBConnection;
import Module.studentmodel;

public class studentDao {
	
	public static boolean checkemail(String email)
	{
		boolean flag=false;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from register where email=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, email);
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
	public static void insertdata(studentmodel u)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "insert into register(fname,lname,email,contact,address,gender,password,cpassword)values(?,?,?,?,?,?,?,?)";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, u.getFname());
			pst.setString(2, u.getLname());
			pst.setString(3, u.getEmail());
			pst.setLong(4, u.getContact());
			pst.setString(5, u.getAddress());
			pst.setString(6, u.getGender());
			pst.setString(7, u.getPassword());
			pst.setString(8, u.getCpassword());
			pst.executeUpdate();
			System.out.println("done");
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	public static studentmodel loginuser(studentmodel a)
	{		studentmodel u = null;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from register where email=? and password=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, a.getEmail());
			pst.setString(2, a.getPassword());
			ResultSet rs = pst.executeQuery();
			if(rs.next())
			{
				u = new studentmodel();
				u.setId(rs.getInt("id"));
				u.setFname(rs.getString("fname"));
				u.setLname(rs.getString("lname"));
				u.setEmail(rs.getString("email"));
				u.setContact(rs.getLong("contact"));
				u.setAddress(rs.getString("address"));
				u.setGender(rs.getString("gender"));
				u.setPassword(rs.getString("password"));
				u.setCpassword(rs.getString("cpassword"));
				
			}
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return u;
	}
	public static void changepassword(int id, String np)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update register set password=? where id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, np);
			pst.setInt(2, id);
			pst.executeUpdate();
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	public static boolean checkoldpassword(int id, String op)
	{ 
			boolean flag=false;
		try {
					Connection conn = DBConnection.createConnection();
					String sql = "select * from register where password=? and id=?";		
					PreparedStatement pst = conn.prepareStatement(sql);
					pst.setString(1, op);
					pst.setInt(2, id);
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
	public static void newPassword(String email,String np) {
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update register set password=? where email=?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, np);
			pst.setString(2, email);
			pst.executeUpdate();
			System.out.println("pass updated");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
