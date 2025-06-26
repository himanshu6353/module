package module2;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

class swing implements ActionListener{
	JButton b2;
	JTextField t1,t2,t3,t4;
	JLabel l1,l2,l3,l4;
	
	public swing() {
		JFrame fr = new JFrame("AppName");
		fr.setVisible(true);
		fr.setLayout(null);
		fr.setSize(700,500);
		
		l1 = new JLabel("ID:");
		l1.setBounds(100,100,120,20);
		fr.add(l1);
		
		l2 = new JLabel("First Name:");
		l2.setBounds(100,130,120,20);
		fr.add(l2);
		
		l3 = new JLabel("Last Name: ");
        l3.setBounds(100, 160, 120, 20);
        fr.add(l3);

        l4 = new JLabel("Email: ");
        l4.setBounds(100, 190, 120, 20);
        fr.add(l4);

        t1 = new JTextField();
        t1.setBounds(180, 100, 120, 20);
        fr.add(t1);

        t2 = new JTextField();
        t2.setBounds(180, 130, 120, 20);
        fr.add(t2);

        t3 = new JTextField();
        t3.setBounds(180, 160, 120, 20);
        fr.add(t3);

        t4 = new JTextField();
        t4.setBounds(180, 190, 120, 20);
        fr.add(t4);

        b2 = new JButton("Exit");
        b2.setBounds(250, 240, 100, 20);
        fr.add(b2);

        b2.addActionListener(this);
	}
	@Override
	public void actionPerformed(ActionEvent e) {

		if (e.getSource() == b2) {
			System.out.println("Exit button Clicked");
			System.exit(0);
		}
		
	}
}
public class P15Swing_GUI {
	public static void main(String [] args) {
		new swing();
	}

}