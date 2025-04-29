package core.Module1;
class MyThread extends Thread {
    private String name;

    MyThread(String name) {
        this.name = name;
    }

    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(name + " is running: " + i);
            try {
                Thread.sleep(500); // Pause for 500ms
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}

public class P033multiple_threads {
	
	    public static void main(String[] args) {
	        MyThread t1 = new MyThread("hy");
	        MyThread t2 = new MyThread("hii");
	        MyThread t3 = new MyThread("Hello");

	        t1.start(); // Start thread 1
	        t2.start(); // Start thread 2
	        t3.start(); // Start thread 3
	    }
	

}
