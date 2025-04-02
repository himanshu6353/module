<%@page import="Dao.PackagesDao"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
		<% 
			int p_id = Integer.parseInt(request.getParameter("p_id"));
			PackagesDao.deletepackages(p_id);
			response.sendRedirect("d-manage-packages.jsp");
		
		%>

</body>
</html>