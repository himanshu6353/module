package Model;

public class Patient {
	private int pat_id;
	private String pat_name,pat_address,pat_email,pat_password;
	private long pat_contact;
	public int getPat_id() {
		return pat_id;
	}
	public void setPat_id(int pat_id) {
		this.pat_id = pat_id;
	}
	public String getPat_name() {
		return pat_name;
	}
	public void setPat_name(String pat_name) {
		this.pat_name = pat_name;
	}
	public String getPat_address() {
		return pat_address;
	}
	public void setPat_address(String pat_address) {
		this.pat_address = pat_address;
	}
	public String getPat_email() {
		return pat_email;
	}
	public void setPat_email(String pat_email) {
		this.pat_email = pat_email;
	}
	public String getPat_password() {
		return pat_password;
	}
	public void setPat_password(String pat_password) {
		this.pat_password = pat_password;
	}
	public long getPat_contact() {
		return pat_contact;
	}
	public void setPat_contact(long pat_contact) {
		this.pat_contact = pat_contact;
	}
	@Override
	public String toString() {
		return "Patient [pat_id=" + pat_id + ", pat_name=" + pat_name + ", pat_address=" + pat_address + ", pat_email="
				+ pat_email + ", pat_password=" + pat_password + ", pat_contact=" + pat_contact + "]";
	}
	
	

}
