package model;

public class P06model {
	private int id;
	private String name,password;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getPassword() {
		return password;
	}
	public void setPassword(String password) {
		this.password = password;
	}
	@Override
	public String toString() {
		return "P06CRUD_with_statement [id=" + id + ", name=" + name + ", password=" + password + "]";
	}

}
