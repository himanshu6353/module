<%@page import="Model.DocterPackages"%>
<%@page import="com.Dao.PackagesDao"%>
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
<%
   int p_id = Integer.parseInt(request.getParameter("p_id"));
%>
<%
     DocterPackages dp = PackagesDao.getpackagesbypid(p_id);
%>
<%
	String msg = (String) request.getAttribute("msg");
%>

   <!-- Contact Start -->
    <div class="container-fluid pt-5">
        <div class="container">
           	 <div class="text-center mx-auto mb-5" style="max-width: 500px;">
                <h5 class="d-inline-block text-primary text-uppercase border-bottom border-5">Any Questions?</h5>
                <h1 class="display-4">Packages Update</h1>
            </div>
            <div class="row">
                <div class="col-12" style="height: 500px;">
                <%
                	if(msg !=null)
                	{
                	%>
                	<%
                		out.print(msg);
                	%>
                	<% 	
                	}
                %>
                </div>
            </div>
            <div class="row justify-content-center position-relative" style="margin-top: -200px; z-index: 1;">
                <div class="col-lg-8">
                    <div class="bg-white rounded p-5 m-5 mb-0">
                        <form action="PackagesController" method="post" >
                            <div class="row g-3">
                            <input type="hidden"  name="p_id" value="<%=dp.getP_id()%>">
                                
                                 
                                
                                <div class="col-12">
                                    <input type="text" class="form-control bg-light border-0" name="p_name" value="<%=dp.getP_name()%>" style="height: 55px;">
                                </div>
                                 <div class="col-12">
                                    <input type="text" class="form-control bg-light border-0" name="p_amount" value="<%=dp.getP_amount() %>" style="height: 55px;">
                                </div>
                                <div class="col-12">
                                    <input type="text" class="form-control bg-light border-0" name="p_test" value="<%=dp.getP_test()%>" style="height: 55px;">
                                </div>
                                
                                <div class="col-12">
                                    <button class="btn btn-primary w-100 py-3" name="action" value="edit" type="submit">Update</button>
                                </div>
                            </div>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Contact End -->
	



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