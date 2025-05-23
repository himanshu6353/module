package Controller;

import java.io.IOException;
import java.util.Random;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.json.HTTP;

import Dao.PatientDao;
import Model.Patient;
import Service_OTP.Servicess;

/**
 * Servlet implementation class PatientController
 */
@WebServlet("/PatientController")
public class PatientController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public PatientController() {
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
		String action = request.getParameter("action");
		if(action.equalsIgnoreCase("register"))
		{
			Patient p = new Patient();
			p.setPat_name(request.getParameter("pat_name"));
			p.setPat_contact(Long.parseLong(request.getParameter("pat_contact")));
			p.setPat_address(request.getParameter("pat_address"));
			p.setPat_email(request.getParameter("pat_email"));
			p.setPat_password(request.getParameter("pat_password"));
			
			boolean flag = PatientDao.checkemail("pat_email");
			if(flag == false)
			{
				PatientDao.insertpatientdata(p);
				response.sendRedirect("p-login.jsp");
			}
			else
			{
				request.setAttribute("msg", "Account already ragister");
				request.getRequestDispatcher("p-docter-packages.jsp").forward(request, response);
				
			}
			
		}
		else if(action.equalsIgnoreCase("login"))
		{
			Patient d = new Patient();
			d.setPat_email(request.getParameter("pat_email"));
			d.setPat_password(request.getParameter("pat_password"));
			boolean flag= PatientDao.checkemail(request.getParameter("pat_email"));
			System.out.println(flag);
				if(flag == true)
				{
					Patient d1 = PatientDao.patientlogin(d);
				
					if(d1 != null)
					{
						HttpSession session = request.getSession();
						session.setAttribute("data", d1);
						request.getRequestDispatcher("p-home.jsp").forward(request, response);
					}
					else
					{
						request.setAttribute("msg", "Password is Incorrect");
						request.getRequestDispatcher("p-login.jsp").forward(request, response);
					}
				}
				else
				{
					request.setAttribute("msg", "Increcte Email");
					request.getRequestDispatcher("p-login.jsp").forward(request, response);
					
				}
				
		}
		else if (action.equalsIgnoreCase("update"))
		{
			Patient p = new Patient();
			p.setPat_id(Integer.parseInt(request.getParameter("pat_id")));
			p.setPat_name(request.getParameter("pat_name"));
			p.setPat_contact(Long.parseLong(request.getParameter("pat_contact")));
			p.setPat_address(request.getParameter("pat_address"));
			p.setPat_email(request.getParameter("pat_email"));
		
			PatientDao.patientdataupdate(p);			
			HttpSession session = request.getSession();
			session.setAttribute("data",p);
			request.getRequestDispatcher("p-home.jsp").forward(request, response);

		
			
			
		}
		else if(action.equalsIgnoreCase("pat_cp"))
		{
			int pat_id = Integer.parseInt(request.getParameter("pat_id"));
			String pat_op = request.getParameter("pat_op");
			String pat_np = request.getParameter("pat_np");
			String pat_cnp = request.getParameter("pat_cnp");
			boolean flag = PatientDao.checkoldpassword(pat_id, pat_op);
			if(flag==true)
			{
				if(pat_np.equals(pat_cnp))
				{
					PatientDao.changepassword(pat_id, pat_np);
					response.sendRedirect("p-home.jsp");
				}
				else
				{
					request.setAttribute("msg", "Password not match");
					request.getRequestDispatcher("p-change-password.jsp");
				}
			}
			else
			{
				request.setAttribute("msg", " old Password is inccorect");
				request.getRequestDispatcher("p-change-password.jsp");
			}
		
		
			
		}
		else if (action.equalsIgnoreCase("fp"))
		{ 
		  String pat_email = request.getParameter("pat_email");
		  boolean flag = PatientDao.checkemail(pat_email);
		  if(flag == true)
		  {
			  Random r = new Random();
				int num = r.nextInt(999999);
				System.out.println(num);
				Servicess s = new Servicess();
				s.sendMail(pat_email, num);
				request.setAttribute("pat_email", pat_email);
				request.setAttribute("otp", num);
				request.getRequestDispatcher("p-otp.jsp").forward(request, response);
		  }
		  else
		  {
			  request.setAttribute("msg", "account doen't exist !");
			  request.getRequestDispatcher("p-forget-password.jsp").forward(request, response);
		  }
		}
		else if(action.equalsIgnoreCase("verify")) {
			String pat_email = request.getParameter("pat_email");
			int otp1 = Integer.parseInt(request.getParameter("otp1"));
			int otp2 = Integer.parseInt(request.getParameter("otp2"));
			if(otp1 == otp2) {
				request.setAttribute("pat_email", pat_email);
				request.getRequestDispatcher("p-new-password.jsp").forward(request, response);
			}
			else {
				request.setAttribute("otp", otp1);
				request.setAttribute("pat_email", pat_email);
				request.setAttribute("msg", "OTP not matched");
				request.getRequestDispatcher("p-otp.jsp").forward(request, response);
			}
		}
		else if(action.equalsIgnoreCase("np")) {
			String pat_email = request.getParameter("pat_email");
			String np = request.getParameter("np");
			String cnp = request.getParameter("cnp");
			if(np.equals(cnp)) {
				PatientDao.newpassword(pat_email, np);
				response.sendRedirect("p-login.jsp");
			}
			else {
				request.setAttribute("msg", "password not matched");
				request.getRequestDispatcher("p-new-password.jsp").forward(request, response);
			}
		}
	}



	}


