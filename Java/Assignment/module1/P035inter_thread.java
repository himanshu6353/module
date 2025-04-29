package core.Module1;

class Banks {
    int balance = 1000;

    synchronized void withdraw(int amount) {
        while (balance < amount) {
            try { wait(); } catch (InterruptedException e) { }
        }
        balance -= amount;
        System.out.println(Thread.currentThread().getName() + " withdrew $" + amount);
    }

    synchronized void deposit(int amount) {
        balance += amount;
        System.out.println(Thread.currentThread().getName() + " deposited $" + amount);
        notify();
    }
}

class WithdrawThread extends Thread {
    Banks account;
    int amount;

    WithdrawThread(Banks acc, int amt) {
        this.account = acc;
        this.amount = amt;
    }

    public void run() {
        account.withdraw(amount);
    }
}

class DepositThread extends Thread {
    Banks account;
    int amount;

    DepositThread(Banks acc, int amt) {
        this.account = acc;
        this.amount = amt;
    }

    public void run() {
        try { Thread.sleep(2000); } catch (InterruptedException e) { }
        account.deposit(amount);
    }
}

public class P035inter_thread {
	public static void main(String[] args) {
        Banks account = new Banks();

        WithdrawThread t1 = new WithdrawThread(account, 1500);
        DepositThread t2 = new DepositThread(account, 1000);

        t1.start();
        t2.start();
    }

}
