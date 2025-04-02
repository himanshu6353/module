package Dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

import Connection.DBConnection;
import Model.appointment;

public class appointmentDao {
	
	public static void bookappointment(appointment a)
	{
		
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "insert into appointment(p_id,pat_id,p_name,p_amount,p_test,date,status) values(?,?,?,?,?,?,?)";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, a.getP_id());
			pst.setInt(2, a.getPat_id());
			pst.setString(3, a.getP_name());
			pst.setInt(4, a.getP_amount());
			pst.setString(5, a.getP_test());
			pst.setDate(6, a.getDate());
			pst.setString(7, a.getStatus());
			
			pst.executeUpdate();
			System.out.println("appointment booked" );
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
	}
	public static List<appointment> getappointmentbypid(int pat_id)
	{
		List<appointment> list = new ArrayList<appointment>();
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from appointment where pat_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, pat_id);
			ResultSet rs = pst.executeQuery();
			while(rs.next())
			{
				appointment a = new appointment();
				a.setA_id(rs.getInt("a_id"));
				a.setPat_id(rs.getInt("pat_id"));
				a.setP_id(rs.getInt("p_id"));
				a.setDate(rs.getDate("date"));
				a.setStatus(rs.getString("status"));
				list.add(a);
			}
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		return list;
		
	}
	public static List<appointment> getallappointment()
	{
		List<appointment> list = new ArrayList<appointment>();
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from appointment";		
			PreparedStatement pst = conn.prepareStatement(sql);
			ResultSet rs = pst.executeQuery();
			while(rs.next())
			{
				appointment a = new appointment();
				a.setA_id(rs.getInt("a_id"));
				a.setP_id(rs.getInt("p_id"));
				a.setPat_id(rs.getInt("pat_id"));
				a.setP_name(rs.getString("p_name"));
				a.setP_amount(rs.getInt("p_amount"));
				a.setP_test(rs.getString("p_test"));
				a.setDate(rs.getDate("date"));
				a.setStatus(rs.getString("status"));
				list.add(a);
			}
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return list;
	}
	public static List<appointment> getAllPendingAppoinements(int p_id){
		List<appointment> list = new ArrayList<appointment>();
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from appointment where p_id=? and status='pending'";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, p_id);
			ResultSet rs = pst.executeQuery();
			while(rs.next()) {
				appointment a = new appointment();
				a.setA_id(rs.getInt("a_id"));
				a.setPat_id(rs.getInt("pat_id"));
				a.setP_id(rs.getInt("p_id"));
				a.setDate(rs.getDate("date"));
				a.setStatus(rs.getString("status"));
				list.add(a);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return list;
	}
	public static appointment getAppoinementsByAid(int a_id){
		appointment a = null;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from appointment where a_id =?";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, a_id);
			ResultSet rs = pst.executeQuery();
			while(rs.next()) {
				a = new appointment();
				a.setA_id(rs.getInt("a_id"));
				a.setPat_id(rs.getInt("pat_id"));
				a.setP_id(rs.getInt("p_id"));
				a.setDate(rs.getDate("date"));
				a.setStatus(rs.getString("status"));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return a;
	}
	public static void updateStatus(int a_id) {
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update appointment set status='confirm' where a_id=? ";
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, a_id);
			pst.executeUpdate();
			System.out.println("status updated");
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

}
