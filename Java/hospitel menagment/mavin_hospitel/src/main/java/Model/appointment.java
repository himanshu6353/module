package Model;

import java.sql.Date;

public class appointment {
		private int a_id, p_id, pat_id, p_amount;
		private Date date;
		private String status, p_name, p_test;
		public int getA_id() {
			return a_id;
		}
		public void setA_id(int a_id) {
			this.a_id = a_id;
		}
		public int getP_id() {
			return p_id;
		}
		public void setP_id(int p_id) {
			this.p_id = p_id;
		}
		public int getPat_id() {
			return pat_id;
		}
		public void setPat_id(int pat_id) {
			this.pat_id = pat_id;
		}
		public int getP_amount() {
			return p_amount;
		}
		public void setP_amount(int p_amount) {
			this.p_amount = p_amount;
		}
		public Date getDate() {
			return date;
		}
		public void setDate(Date date) {
			this.date = date;
		}
		public String getStatus() {
			return status;
		}
		public void setStatus(String status) {
			this.status = status;
		}
		public String getP_name() {
			return p_name;
		}
		public void setP_name(String p_name) {
			this.p_name = p_name;
		}
		public String getP_test() {
			return p_test;
		}
		public void setP_test(String p_test) {
			this.p_test = p_test;
		}
		@Override
		public String toString() {
			return "appointment [a_id=" + a_id + ", p_id=" + p_id + ", pat_id=" + pat_id + ", p_amount=" + p_amount
					+ ", date=" + date + ", status=" + status + ", p_name=" + p_name + ", p_test=" + p_test + "]";
		}
		
		
}
