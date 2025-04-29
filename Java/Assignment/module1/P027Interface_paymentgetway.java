package core.Module1;

 interface PaymentGateway {
	 	public void processPayment(double amount);
}
class CCPayment implements PaymentGateway {
		private String cardNumber;

 public CCPayment(String cardNumber) {
     	this.cardNumber = cardNumber;
 }
 public void processPayment(double amount) {
     System.out.println("Processing credit card payment of ₹" + amount + " using card: " + cardNumber);
 }
}
class UPIPayment implements PaymentGateway {
 private String upiId;

 public UPIPayment(String upiId) {
     this.upiId = upiId;
 }
 public void processPayment(double amount) {
     System.out.println("Processing UPI payment of ₹" + amount + " using UPI ID: " + upiId);
 }
}
public class P027Interface_paymentgetway {
 public static void main(String[] args) {
     PaymentGateway creditCard = new CCPayment("1234-5678-9876-5432");
     creditCard.processPayment(1500.00);

     PaymentGateway upiPayment = new UPIPayment("user@upi");
     upiPayment.processPayment(750.50);
 }
}

