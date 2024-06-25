class CustomThread extends Thread {
    public CustomThread(String name) {
        super(name);
    }
@Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println(getName() + " with priority " + getPriority() + " is running. Iteration: " + i);
            try {
                // Sleep for a while to simulate some work and make the output readable
                Thread.sleep(100);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}
public class P37 {
    public static void main(String[] args) {
        CustomThread thread1 = new CustomThread("Thread-1");
        CustomThread thread2 = new CustomThread("Thread-2");
        CustomThread thread3 = new CustomThread("Thread-3");

        // Set priorities
        thread1.setPriority(Thread.MIN_PRIORITY); // Priority 1
        thread2.setPriority(Thread.NORM_PRIORITY); // Priority 5
        thread3.setPriority(Thread.MAX_PRIORITY); // Priority 10
        // Start threads
        thread1.start();
        thread2.start();
        thread3.start();
    }}

