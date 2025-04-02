	package Dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import Connection.DBConnection;
import Model.DocterPackages;

public class PackagesDao {
	
	public static void insertpackages(DocterPackages dp)
	{
		try {
				Connection conn = DBConnection.createConnection();
				String sql = "insert into packages(did,p_name,p_amount,p_test)values(?,?,?,?)";		
				PreparedStatement pst = conn.prepareStatement(sql);
				pst.setInt(1, dp.getDid());
				pst.setString(2, dp.getP_name());
				pst.setInt(3, dp.getP_amount());
				pst.setString(4, dp.getP_test());
				pst.executeUpdate();
				System.out.println("data insert");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	public  static List<DocterPackages> getpackagebydid(int did)
	{
		List<DocterPackages> list = new ArrayList<DocterPackages>();
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from packages where did=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, did);
			ResultSet rs = pst.executeQuery();
			while(rs.next())
			{
				DocterPackages dp = new DocterPackages();
				dp.setP_id(rs.getInt("p_id"));
				dp.setDid(rs.getInt("did"));
				dp.setP_name(rs.getString("p_name"));
				dp.setP_amount(rs.getInt("p_amount"));
				dp.setP_test(rs.getString("p_test"));
				list.add(dp);
				
			}
			
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		return list;
		
	}
	public static DocterPackages getpackagesbypid(int p_id)
	{
		DocterPackages dp = null;
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from packages where p_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, p_id);
			ResultSet rs = pst.executeQuery();
			if(rs.next())
			{
				 dp = new DocterPackages();
				dp.setP_id(rs.getInt("p_id"));
				dp.setDid(rs.getInt("did"));
				dp.setP_name(rs.getString("p_name"));
				dp.setP_amount(rs.getInt("p_amount"));
				dp.setP_test(rs.getString("p_test"));
			}
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return dp;
	}
	public static void dataupdate(DocterPackages dp)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "update packages set p_name=?,p_amount=?,p_test=? where p_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setString(1, dp.getP_name());
			pst.setInt(2, dp.getP_amount());
			pst.setString(3, dp.getP_test());
			pst.setInt(4, dp.getP_id());
			pst.executeUpdate();
			System.out.println("data insert");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
	}
	public static void deletepackages(int p_id)
	{
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "delete from packages where p_id=?";		
			PreparedStatement pst = conn.prepareStatement(sql);
			pst.setInt(1, p_id);
			pst.executeUpdate();
			System.out.println("Packages deleted");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
	}
	public static List<DocterPackages> GetAllPackages()
	{
		List<DocterPackages> list = new ArrayList<DocterPackages>();
		try {
			Connection conn = DBConnection.createConnection();
			String sql = "select * from packages";		
			PreparedStatement pst = conn.prepareStatement(sql);
			ResultSet rs = pst.executeQuery();
			while(rs.next())
			{
				DocterPackages dp = new DocterPackages();
				dp.setP_id(rs.getInt("p_id"));
				dp.setDid(rs.getInt("did"));
				dp.setP_name(rs.getString("p_name"));
				dp.setP_amount(rs.getInt("p_amount"));
				dp.setP_test(rs.getString("p_test"));
				list.add(dp);
			}
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		return list;
		
	}
}
