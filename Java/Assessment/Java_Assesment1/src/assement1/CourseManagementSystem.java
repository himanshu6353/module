package assement1;

import java.sql.*;
import java.util.Scanner;

public class CourseManagementSystem {
    static  String url = "jdbc:mysql://localhost:3306/java_assesment1_course";
    static  String user = "root";
    static  String pass = "";

    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        try {        
            Class.forName("com.mysql.cj.jdbc.Driver");
            while (true) {
                System.out.println("\n---------- Course Management System ----------");
                System.out.println("1. Add Course");
                System.out.println("2. View All Courses");
                System.out.println("3. Search Course by ID");
                System.out.println("4. Edit Course");
                System.out.println("5. Delete Course");
                System.out.println("6. Exit");
                System.out.print("Enter your choice: ");
                int choice = sc.nextInt();

                switch (choice) {
                    case 1: addCourse(); break;
                    case 2: viewCourses(); break;
                    case 3: searchCourse(); break;
                    case 4: editCourse(); break;
                    case 5: deleteCourse(); break;
                    case 6: System.out.println("Exiting..."); 
                    return;
                    default: System.out.println("Invalid choice!");
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    public static void addCourse() {
        try (Connection conn = DriverManager.getConnection(url, user, pass)) {
            System.out.println("---------- Add Course ----------");

            System.out.print("Course ID: ");
            int id = sc.nextInt();
            sc.nextLine();

            System.out.print("Course Name: ");
            String name = sc.nextLine();

            System.out.print("Course Fees: ");
            double fees = sc.nextDouble();
            sc.nextLine();

            System.out.print("Course Duration: ");
            String duration = sc.nextLine();

            System.out.print("Course Detail: ");
            String detail = sc.nextLine();

            String sql = "INSERT INTO course VALUES (?, ?, ?, ?, ?)";
            PreparedStatement ps = conn.prepareStatement(sql);
            ps.setInt(1, id);
            ps.setString(2, name);
            ps.setDouble(3, fees);
            ps.setString(4, duration);
            ps.setString(5, detail);

            int rows = ps.executeUpdate();
            if (rows > 0)
                System.out.println("Course added successfully!");
        } catch (SQLIntegrityConstraintViolationException e) {
            System.out.println("Course ID already exists!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    public static void viewCourses() {
        try (Connection conn = DriverManager.getConnection(url, user, pass)) {
            System.out.println("---------- All Courses ----------");

            String sql = "SELECT * FROM course";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(sql);

            while (rs.next()) {
                System.out.println("Course ID     : " + rs.getInt("id"));
                System.out.println("Course Name   : " + rs.getString("name"));
                System.out.println("Course Fees   : " + rs.getDouble("fees"));
                System.out.println("Course Duration: " + rs.getString("duration"));
                System.out.println("Course Details : " + rs.getString("detail"));
                System.out.println("---------------------------------------------");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // Search course by ID
    public static void searchCourse() {
        try (Connection conn = DriverManager.getConnection(url, user, pass)) {
            System.out.print("Enter Course ID to Search: ");
            int id = sc.nextInt();

            String sql = "SELECT * FROM course WHERE id = ?";
            PreparedStatement ps = conn.prepareStatement(sql);
            ps.setInt(1, id);

            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
                System.out.println("Course ID     : " + rs.getInt("id"));
                System.out.println("Course Name   : " + rs.getString("name"));
                System.out.println("Course Fees   : " + rs.getDouble("fees"));
                System.out.println("Course Duration: " + rs.getString("duration"));
                System.out.println("Course Details : " + rs.getString("detail"));
            } else {
                System.out.println("Course not found!");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void editCourse() {
        try (Connection conn = DriverManager.getConnection(url, user, pass)) {
            System.out.print("Enter Course ID to Edit: ");
            int id = sc.nextInt();
            sc.nextLine();

            String checkSql = "SELECT * FROM course WHERE id = ?";
            PreparedStatement checkPs = conn.prepareStatement(checkSql);
            checkPs.setInt(1, id);
            ResultSet rs = checkPs.executeQuery();

            if (rs.next()) {
                System.out.print("New Course Name: ");
                String name = sc.nextLine();

                System.out.print("New Course Fees: ");
                double fees = sc.nextDouble();
                sc.nextLine();

                System.out.print("New Course Duration: ");
                String duration = sc.nextLine();

                System.out.print("New Course Detail: ");
                String detail = sc.nextLine();

                String updateSql = "UPDATE course SET name=?, fees=?, duration=?, detail=? WHERE id=?";
                PreparedStatement ps = conn.prepareStatement(updateSql);
                ps.setString(1, name);
                ps.setDouble(2, fees);
                ps.setString(3, duration);
                ps.setString(4, detail);
                ps.setInt(5, id);

                ps.executeUpdate();
                System.out.println("Course updated successfully!");
            } else {
                System.out.println("Course not found!");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    public static void deleteCourse() {
        try (Connection conn = DriverManager.getConnection(url, user, pass)) {
            System.out.print("Enter Course ID to Delete: ");
            int id = sc.nextInt();

            String sql = "DELETE FROM course WHERE id = ?";
            PreparedStatement ps = conn.prepareStatement(sql);
            ps.setInt(1, id);

            int rows = ps.executeUpdate();
            if (rows > 0)
                System.out.println("Course deleted successfully!");
            else
                System.out.println("Course not found!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
