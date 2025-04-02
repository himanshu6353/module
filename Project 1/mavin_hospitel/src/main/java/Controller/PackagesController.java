package Controller;

import java.io.IOException;
import java.lang.ProcessBuilder.Redirect;
import java.sql.PreparedStatement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import Dao.DoctorDao;
import Dao.PackagesDao;
import Model.DocterPackages;

/**
 * Servlet implementation class PackagesController
 */
@WebServlet("/PackagesController")
public class PackagesController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public PackagesController() {
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

		String action= request.getParameter("action");
		if(action.equalsIgnoreCase("add"))
		{
			  DocterPackages dp=new DocterPackages();
			 dp.setDid(Integer.parseInt(request.getParameter("did")));
			 dp.setP_name(request.getParameter("p_name"));
			 dp.setP_amount(Integer.parseInt(request.getParameter("p_amount")));
			 dp.setP_test(request.getParameter("p_test"));
			 System.out.println(dp);
			 PackagesDao.insertpackages(dp);
			 response.sendRedirect("d-home.jsp");
			 
			 
			  
		}else if (action.equalsIgnoreCase("edit")) {
			
			  DocterPackages dp=new DocterPackages();
			  dp.setP_id(Integer.parseInt(request.getParameter("p_id")));
			  dp.setP_name(request.getParameter("p_name"));
			  dp.setP_amount(Integer.parseInt(request.getParameter("p_amount")));
			  dp.setP_test(request.getParameter("p_test"));			
			  PackagesDao.dataupdate(dp);
			  response.sendRedirect("d-manage-packages.jsp");
			  
		}
		
		
	}

}
