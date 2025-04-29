package core.Module1;

class Bank {
    private int balance = 1000;

    synchronized void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println(Thread.currentThread().getName() + " withdrew $" + amount);
        } else {
            System.out.println(Thread.currentThread().getName() + " - Insufficient balance!");
        }
    }
}

class Customer extends Thread {
    Bank account;
    int amount;

    Customer(Bank account, String name, int amount) {
        super(name);
        this.account = account;
        this.amount = amount;
    }

    public void run() {
        account.withdraw(amount);
    }
}
public class P034synchronization {
	 public static void main(String[] args) {
	        Bank account = new Bank();

	        Customer c1 = new Customer(account, "Alice", 700);
	        Customer c2 = new Customer(account, "Bob", 500);

	        c1.start();
	        c2.start();
	    }
}
