<%@page import="com.Dao.PatientDao"%>
<%@page import="Model.Patient"%>
<%@page import="com.Dao.appointmentDao"%>
<%@page import="Model.appointment"%>
<%@page import="Model.DocterPackages"%>
<%@page import="com.Dao.PackagesDao"%>
<%@page import="java.util.List"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@include file="d-header.jsp" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<div class="text-center mx-auto mb-5" style="max-width: 500px;">
				
				<h1 class="display-4">Pending appointment</h1>
			</div>
			<div class="row g-5">
<%List<DocterPackages> pack_list = PackagesDao.getpackagebydid(d.getDid()); %>
<%List<appointment> app_list = appointmentDao.getallappointment(); %>
<%
for(DocterPackages dp:pack_list){
	%>
	
	
	<!-- Blog Start -->
	<div class="container-fluid py-5">
		<div class="container">
			
			<%List<appointment> all_pending_app = appointmentDao.getAllPendingAppoinements(dp.getP_id()); %>
			<%
			for(appointment a:all_pending_app){
				appointment appointment = appointmentDao.getAppoinementsByAid(a.getA_id());
				Patient patient  = PatientDao.getpatientByPid(appointment.getPat_id());
			%>
				<div class="col-xl-4 col-lg-6">
					<div class="bg-light rounded overflow-hidden">
						<img class="img-fluid w-100" src="img/blog-1.jpg" alt="">
						<div class="p-4">
							<a class="h3 d-block mb-3" href="#"><%=patient.getPat_name() %></a>
							<p class="m-0"><%=patient.getPat_contact()%></p>
						</div>
						<div class="d-flex justify-content-between border-top p-4">
							<div class="d-flex align-items-center">
								<img class="rounded-circle me-2" src="img/user.jpg" width="25"
									height="25" alt=""> <small><%=appointment.getP_name() %></small>
							</div>
							<div class="d-flex align-items-center">
								<small class="ms-3">
								<i class="bi bi-currency-rupee"></i>Rs. <%=dp.getP_amount() %></small>
							</div>
						</div>
						
						<div class="d-flex justify-content-between border-top p-4">
							<div class="d-flex align-items-center">
								<a class="h3 d-block mb-3" href="appointmentController?action=confirm&a_id=<%=a.getA_id()%>&pat_email=<%=patient.getPat_email()%>">Confirm</a>
							</div>
							<div class="d-flex align-items-center">
								<a class="h3 d-block mb-3" href="d-delete-package.jsp?p_id=<%=dp.getP_id()%>">Reject</a>
							</div>
						</div>
						
						
							
					</div>
				</div>
				<%} %>
			</div>
		</div>
	</div>
	<!-- Blog End -->	
	
	
	
	
	<%
}

%>
 <!-- Back to Top -->
    <a href="#" class="btn btn-lg btn-primary btn-lg-square back-to-top"><i class="bi bi-arrow-up"></i></a>


    <!-- JavaScript Libraries -->
    <script src="https://code.jquery.com/jquery-3.4.1.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0/dist/js/bootstrap.bundle.min.js"></script>
    <script src="lib/easing/easing.min.js"></script>
    <script src="lib/waypoints/waypoints.min.js"></script>
    <script src="lib/owlcarousel/owl.carousel.min.js"></script>
    <script src="lib/tempusdominus/js/moment.min.js"></script>
    <script src="lib/tempusdominus/js/moment-timezone.min.js"></script>
    <script src="lib/tempusdominus/js/tempusdominus-bootstrap-4.min.js"></script>

    <!-- Template Javascript -->
    <script src="js/main.js"></script>
</body>

</html>