package Module;

public class studentmodel {
		private int id;
		private String fname,lname,password,address,email,cpassword,gender;
		private long contact;
		public int getId() {
			return id;
		}
		public void setId(int id) {
			this.id = id;
		}
		public String getFname() {
			return fname;
		}
		public void setFname(String fname) {
			this.fname = fname;
		}
		public String getLname() {
			return lname;
		}
		public void setLname(String lname) {
			this.lname = lname;
		}
		public String getPassword() {
			return password;
		}
		public void setPassword(String password) {
			this.password = password;
		}
		public String getAddress() {
			return address;
		}
		public void setAddress(String address) {
			this.address = address;
		}
		public String getEmail() {
			return email;
		}
		public void setEmail(String email) {
			this.email = email;
		}
		public String getCpassword() {
			return cpassword;
		}
		public void setCpassword(String cpassword) {
			this.cpassword = cpassword;
		}
		public String getGender() {
			return gender;
		}
		public void setGender(String gender) {
			this.gender = gender;
		}
		public long getContact() {
			return contact;
		}
		public void setContact(long contact) {
			this.contact = contact;
		}
		@Override
		public String toString() {
			return "studentmodel [id=" + id + ", fname=" + fname + ", lname=" + lname + ", password=" + password
					+ ", address=" + address + ", email=" + email + ", cpassword=" + cpassword + ", gender=" + gender
					+ ", contact=" + contact + "]";
		}
		
		

}
