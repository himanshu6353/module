package Model;

public class Doctor {
				private int did;
				private String image,name,address,specialization,w_address,email,password;
				private long contact;
				public int getDid() {
					return did;
				}
				public void setDid(int did) {
					this.did = did;
				}
				public String getImage() {
					return image;
				}
				public void setImage(String image) {
					this.image = image;
				}
				public String getName() {
					return name;
				}
				public void setName(String name) {
					this.name = name;
				}
				public String getAddress() {
					return address;
				}
				public void setAddress(String address) {
					this.address = address;
				}
				public String getSpecialization() {
					return specialization;
				}
				public void setSpecialization(String specialization) {
					this.specialization = specialization;
				}
				public String getW_address() {
					return w_address;
				}
				public void setW_address(String w_address) {
					this.w_address = w_address;
				}
				public String getEmail() {
					return email;
				}
				public void setEmail(String email) {
					this.email = email;
				}
				public String getPassword() {
					return password;
				}
				public void setPassword(String password) {
					this.password = password;
				}
				public long getContact() {
					return contact;
				}
				public void setContact(long contact) {
					this.contact = contact;
				}
				@Override
				public String toString() {
					return "d_model [did=" + did + ", image=" + image + ", name=" + name + ", address=" + address
							+ ", specialization=" + specialization + ", w_address=" + w_address + ", email=" + email
							+ ", password=" + password + ", contact=" + contact + "]";
				}
				
	

}
