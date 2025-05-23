<%@page import="Model.Doctor"%>
<%@page import="com.Dao.DoctorDao"%>
<%@page import="java.util.List"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@include file="a-header.jsp" %>
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="">
    <meta name="author" content="Dashboard">
    <meta name="keyword" content="Dashboard, Bootstrap, Admin, Template, Theme, Responsive, Fluid, Retina">

    <title>DASHGUM - Bootstrap Admin Template</title>

    <!-- Bootstrap core CSS -->
    <link href="assets/css/bootstrap.css" rel="stylesheet">
    <!--external css-->
    <link href="assets/font-awesome/css/font-awesome.css" rel="stylesheet" />
        
    <!-- Custom styles for this template -->
    <link href="assets/css/style.css" rel="stylesheet">
    <link href="assets/css/style-responsive.css" rel="stylesheet">

    <!-- HTML5 shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!--[if lt IE 9]>
      <script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
      <script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
    <![endif]-->
  </head>

  <body>

  <section id="container" >

      
      
      <!-- **********************************************************************************************************************************************************
      MAIN CONTENT
      *********************************************************************************************************************************************************** -->
      <!--main content start-->
      <section id="main-content">
          <section class="wrapper">
          	<h3><i class="fa fa-angle-right"></i> All Doctors Of Hospitel</h3>
				<div class="row">
				
	                  <div class="col-md-12">
	                  	  <div class="content-panel">
	                  	  	  <h4><i class="fa fa-angle-right"></i> Doctor List</h4>
	                  	  	  <hr>
		                      <table class="table">
		                          <thead>
		                          <tr>
		                              <th>SR.No.</th>
		                              <th> Did</th>
		                              <th> Name</th>
		                              <th>Contact</th>
		                              <th>Address</th>
		                              <th>specialization</th>
		                              <th>Work Address</th>
		                              <th>Email</th>
		                              <th>Password</th>
		                          </tr>
		                          </thead>
		                         <%
		                         int srno=1;
		                         List<Doctor> list = DoctorDao.GetAllDoctar();
		                         for(Doctor d:list)
		                         {
		                         %>
		                          <tbody>
		                          <tr>
		                              <td><%=srno %></td>
		                                <td><%=d.getDid() %></td>
		                              <td><a href="a-doctor-name.jsp?did=<%=d.getDid()%>"><%=d.getName() %></a></td>
		                              <td><%=d.getContact() %></td>
		                              <td><%=d.getAddress() %></td>
		                              <td><%=d.getSpecialization() %></td>
		                              <td><%=d.getW_address() %></td>
		                              <td><%=d.getEmail() %></td>
		                              <td><%=d.getPassword()%></td>
		                          </tr>
		                          
		                          </tbody>
		                          <%
		                         	srno++; 
		                         } %>
		                      </table>
	                  	  </div>
	                  </div><!-- /col-md-12 -->
               

              </div>

		</section>
      </section><!-- /MAIN CONTENT -->

      <!--main content end-->
      <!--footer start-->
      <footer class="site-footer">
          <div class="text-center">
              2014 - Alvarez.is
              <a href="basic_table.html#" class="go-top">
                  <i class="fa fa-angle-up"></i>
              </a>
          </div>
      </footer>
      <!--footer end-->
  </section>

    <!-- js placed at the end of the document so the pages load faster -->
    <script src="assets/js/jquery.js"></script>
    <script src="assets/js/bootstrap.min.js"></script>
    <script class="include" type="text/javascript" src="assets/js/jquery.dcjqaccordion.2.7.js"></script>
    <script src="assets/js/jquery.scrollTo.min.js"></script>
    <script src="assets/js/jquery.nicescroll.js" type="text/javascript"></script>


    <!--common script for all pages-->
    <script src="assets/js/common-scripts.js"></script>

    <!--script for this page-->
    
  <script>
      //custom select box

      $(function(){
          $('select.styled').customSelect();
      });

  </script>

  </body>
</html>
