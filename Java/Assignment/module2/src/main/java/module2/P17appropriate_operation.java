package module2;
import java.awt.event.*;
import java.sql.*;
import javax.swing.*;

class SQL implements ActionListener {
    JButton b1, b2, b3, b4;
    JTextField t1, t2, t3, t4, t5, t6;

    SQL() {
        JFrame f = new JFrame("Emp App");
        f.setSize(600, 400);
        f.setLayout(null);
        f.setVisible(true);

        JLabel l1 = new JLabel("ID:");
        l1.setBounds(50, 50, 80, 20); f.add(l1);
        t1 = new JTextField();
        t1.setBounds(130, 50, 120, 20); f.add(t1);

        JLabel l2 = new JLabel("Fname:");
        l2.setBounds(50, 80, 80, 20); f.add(l2);
        t2 = new JTextField();
        t2.setBounds(130, 80, 120, 20); f.add(t2);

        JLabel l3 = new JLabel("Lname:");
        l3.setBounds(50, 110, 80, 20); f.add(l3);
        t3 = new JTextField();
        t3.setBounds(130, 110, 120, 20); f.add(t3);

        JLabel l4 = new JLabel("Date:");
        l4.setBounds(50, 140, 80, 20); f.add(l4);
        t4 = new JTextField();
        t4.setBounds(130, 140, 120, 20); f.add(t4);

        JLabel l5 = new JLabel("Dept:");
        l5.setBounds(50, 170, 80, 20); f.add(l5);
        t5 = new JTextField();
        t5.setBounds(130, 170, 120, 20); f.add(t5);

        JLabel l6 = new JLabel("Salary:");
        l6.setBounds(50, 200, 80, 20); f.add(l6);
        t6 = new JTextField();
        t6.setBounds(130, 200, 120, 20); f.add(t6);

        b1 = new JButton("Insert");
        b1.setBounds(50, 240, 90, 25); f.add(b1);
        b2 = new JButton("Select");
        b2.setBounds(150, 240, 90, 25); f.add(b2);
        b3 = new JButton("Update");
        b3.setBounds(50, 270, 90, 25); f.add(b3);
        b4 = new JButton("Delete");
        b4.setBounds(150, 270, 90, 25); f.add(b4);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/module2", "root", "");
            if (e.getSource() == b1) {
                PreparedStatement p = con.prepareStatement("insert into employee(first_name,last_name,hire_date,department,salary) values(?,?,?,?,?)");
                p.setString(1, t2.getText());
                p.setString(2, t3.getText());
                p.setString(3, t4.getText());
                p.setString(4, t5.getText());
                p.setDouble(5, Double.parseDouble(t6.getText()));
                p.executeUpdate();
                System.out.println("Inserted");
            }
            else if (e.getSource() == b2) {
                PreparedStatement p = con.prepareStatement("select * from employee where employee_id=?");
                p.setInt(1, Integer.parseInt(t1.getText()));
                ResultSet r = p.executeQuery();
                if (r.next()) {
                    t2.setText(r.getString(2));
                    t3.setText(r.getString(3));
                    t4.setText(r.getString(4));
                    t5.setText(r.getString(5));
                    t6.setText(r.getString(6));
                } else {
                    System.out.println("Not found");
                }
            }
            else if (e.getSource() == b3) {
                PreparedStatement p = con.prepareStatement("update employee set first_name=?,last_name=?,hire_date=?,department=?,salary=? where employee_id=?");
                p.setString(1, t2.getText());
                p.setString(2, t3.getText());
                p.setString(3, t4.getText());
                p.setString(4, t5.getText());
                p.setDouble(5, Double.parseDouble(t6.getText()));
                p.setInt(6, Integer.parseInt(t1.getText()));
                p.executeUpdate();
                System.out.println("Updated");
            }
            else if (e.getSource() == b4) {
                PreparedStatement p = con.prepareStatement("delete from employee where employee_id=?");
                p.setInt(1, Integer.parseInt(t1.getText()));
                p.executeUpdate();
                System.out.println("Deleted");
            }
        } catch (Exception ex) {
            System.out.println("Error: " + ex);
        }
    }
}

public class P17appropriate_operation {
    public static void main(String[] args) {
        new SQL();
    }
}
