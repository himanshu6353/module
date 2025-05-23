<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@include file="a-header.jsp" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<% 
		session.removeAttribute("email");
	   session.invalidate();
	   response.sendRedirect("a-login.jsp");
	
	%>

</body>
</html>