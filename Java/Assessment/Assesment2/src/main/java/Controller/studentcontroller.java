package Controller;

import java.io.IOException;
import java.util.Random;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;


import Dao.studentDao;
import Module.studentmodel;
import Service_OTP.Servicess;

/**
 * Servlet implementation class studentcontroller
 */
@WebServlet("/studentcontroller")
public class studentcontroller extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public studentcontroller() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
		String action = request.getParameter("action");
		if(action.equalsIgnoreCase("register"))
		{
			studentmodel u = new studentmodel();
			u.setFname(request.getParameter("fname"));
			u.setLname(request.getParameter("lname"));
			u.setEmail(request.getParameter("email"));
			u.setContact(Long.parseLong(request.getParameter("contact")));
			u.setAddress(request.getParameter("address"));
			u.setGender(request.getParameter("gender"));
			u.setPassword(request.getParameter("password"));
			u.setCpassword(request.getParameter("cpassword"));
			
			if(u.getPassword().equals(u.getCpassword())) {
				boolean flag =studentDao.checkemail(request.getParameter("email"));
				if(flag ==false)
				{
					studentDao.insertdata(u);
					response.sendRedirect("login.jsp");
				}
				else
				{
					request.setAttribute("msg", "Account already register");
					request.getRequestDispatcher("register.jsp").forward(request, response);
				}
			}
			else {
				request.setAttribute("msg", "Password not matched");
				request.getRequestDispatcher("register.jsp").forward(request, response);
			}
			
			
			
			
		}
		
		else if(action.equalsIgnoreCase("login"))
		{
			studentmodel u = new studentmodel();
			u.setEmail(request.getParameter("email"));
			u.setPassword(request.getParameter("password")); 
			boolean flag = studentDao.checkemail(request.getParameter("email"));
			if(flag == true)
			{
				studentmodel u1 = studentDao.loginuser(u);
				if(u1 !=null)
				{
					HttpSession session = request.getSession();
					session.setAttribute("data", u1);
					request.getRequestDispatcher("home.jsp").forward(request, response);
				}
				else
				{
					request.setAttribute("msg", "inccrect password");
					request.getRequestDispatcher("login.jsp");
				}
			}
			else {
			    request.setAttribute("msg", "Email not registered");
			    request.getRequestDispatcher("login.jsp").forward(request, response);
			}

		}
		else if(action.equalsIgnoreCase("cp"))
		{
			int id = Integer.parseInt(request.getParameter("id"));
			String op = request.getParameter("op");
			String np = request.getParameter("np");
			String cnp = request.getParameter("cnp");
			boolean flag = studentDao.checkoldpassword(id, op);
			if(flag==true)
			{
				if(np.equals(cnp))
				{
					studentDao.changepassword(id, np);
					response.sendRedirect("home.jsp");
				}
				else
				{
					request.setAttribute("msg", "Password not match");
					request.getRequestDispatcher("changepass.jsp");
				}
			}
			else
			{
				request.setAttribute("msg", " old Password is inccorect");
				request.getRequestDispatcher("changepass.jsp");
			}
		
		
			
		}
		else if(action.equalsIgnoreCase("forgetpassword"))
		{
			String email = request.getParameter("email");
			boolean flag= studentDao.checkemail(email);
			if(flag == true) {
				Random r = new Random();
				int num = r.nextInt(999999);
				System.out.println(num);
				Servicess s = new Servicess();
				s.sendMail(email, num);
				request.setAttribute("email", email);
				request.setAttribute("otp", num);
				request.getRequestDispatcher("verifyotp.jsp").forward(request, response);
			}
			else {
				request.setAttribute("msg", "account doen't exist !");
				request.getRequestDispatcher("forgetpassword.jsp").forward(request, response);
			}
		}
		else if(action.equalsIgnoreCase("verify")) {
			String email = request.getParameter("email");
			int otp1 = Integer.parseInt(request.getParameter("otp1"));
			int otp2 = Integer.parseInt(request.getParameter("otp2"));
			if(otp1 == otp2) {
				request.setAttribute("email", email);
				request.getRequestDispatcher("newpassword.jsp").forward(request, response);
			}
			else {
				request.setAttribute("otp", otp1);
				request.setAttribute("email", email);
				request.setAttribute("msg", "OTP not matched");
				request.getRequestDispatcher("verifyotp.jsp").forward(request, response);
			}
		}
		else if(action.equalsIgnoreCase("np")) {
			String email = request.getParameter("email");
			String np = request.getParameter("np");
			String cnp = request.getParameter("cnp");
			if(np.equals(cnp)) {
				studentDao.newPassword(email, np);
				response.sendRedirect("login.jsp");
			}
			else {
				request.setAttribute("msg", "password not matched");
				request.getRequestDispatcher("newpassword.jsp").forward(request, response);
			}
		}
	}

}

