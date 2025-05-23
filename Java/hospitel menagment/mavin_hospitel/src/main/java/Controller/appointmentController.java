package Controller;

import java.io.IOException;
import java.sql.Date;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Dao.appointmentDao;
import Model.appointment;
import Service_OTP.Servicess;

/**
 * Servlet implementation class appointmentController
 */
@WebServlet("/appointmentController")
public class appointmentController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public appointmentController() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
		String action = request.getParameter("action");
		if(action.equalsIgnoreCase("confirm")) {
			int a_id = Integer.parseInt(request.getParameter("a_id"));
			String email = request.getParameter("pat_email");
			Servicess s = new Servicess();
			s.sendMsg(email, "Your Appointment has been booked");
			appointmentDao.updateStatus(a_id);
			response.sendRedirect("d-pending-appointment.jsp");
		}
	}
	

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String action= request.getParameter("action");
		if(action.equalsIgnoreCase("book"))
		{
			appointment a = new appointment();
			a.setPat_id(Integer.parseInt(request.getParameter("pat_id")));	
			a.setP_id(Integer.parseInt(request.getParameter("p_id")));
			a.setP_name(request.getParameter("p_name"));
			a.setP_amount(Integer.parseInt(request.getParameter("p_amount")));
			a.setP_test(request.getParameter("p_test"));
			a.setDate(Date.valueOf(request.getParameter("date")));
			a.setStatus("pending");
			appointmentDao.bookappointment(a);
			response.sendRedirect("p-home.jsp");
			
		}
		
	}

}
