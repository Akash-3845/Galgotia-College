class MyThread extends Thread {
    public void run() {
        // Code to execute in the new thread
        for (int i = 0; i < 5; i++) {
            System.out.println("Thread: " + i);
            try {
                Thread.sleep(500); // Sleep for 500 milliseconds
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }}}
public class P33 {
    public static void main(String[] args) {
 // Create an instance of MyThread
        MyThread thread = new MyThread();
  // Start the thread
        thread.start();
 // Main thread work
        for (int i = 0; i < 5; i++) {
            System.out.println("Main: " + i);
            try {
                Thread.sleep(1000); // Sleep for 1000 milliseconds
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

