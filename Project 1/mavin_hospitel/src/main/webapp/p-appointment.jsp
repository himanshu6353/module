<%@page import="Dao.DoctorDao"%>
<%@page import="Model.Doctor"%>
<%@page import="Dao.PackagesDao"%>
<%@page import="Model.DocterPackages"%>
<%@page import="Dao.appointmentDao"%>
<%@page import="java.util.List"%>
<%@page import="Model.appointment"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@include file="p-header.jsp" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<table class="table">
		<thead>
			<tr>
				<th scope="col">Sr. No</th>
				<th scope="col">Doctor Name</th>
				<th scope="col">Specialization</th>
				<th scope="col">Package</th>
				<th scope="col">Amount</th>
				<th scope="col">Date</th>
				<th scope="col">Status</th>
			</tr>
		</thead>
		<tbody>
		<%int srno = 1; %>
		<%List<appointment> list =appointmentDao.getappointmentbypid(p.getPat_id()); %>
		<%for(appointment a:list){ %>
		<% DocterPackages dp = PackagesDao.getpackagesbypid(a.getP_id()); %>
		<%Doctor d1 = DoctorDao.GetDoctorById(dp.getDid()); %>
			<tr>
				<th scope="row"><%=srno %></th>
				<td><%=d1.getName() %></td>
				<td><%=d1.getSpecialization() %></td>
				<td><%=dp.getP_name() %></td>
				<td><%=dp.getP_amount() %></td>
				<td><%=a.getDate() %></td>
				<td><%=a.getStatus() %></td>
			</tr>
			<%srno++; %>
			<%} %>
		</tbody>
	</table>

</body>
</html>