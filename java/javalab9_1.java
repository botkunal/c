public class javalab9_1 {
    public static void main(String[] args) {
        final String resource1 = "Resource 1";
        final String resource2 = "Resource 2";
        
        // Thread 1
        Thread t1 = new Thread(() -> {
            synchronized (resource1) {
                System.out.println("Thread 1: Locked resource 1");

                try {
                    Thread.sleep(1000);  // Introduce a delay to ensure both threads try to lock resources
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                synchronized (resource2) {
                    System.out.println("Thread 1: Locked resource 2");
                }
            }
        });

        // Thread 2
        Thread t2 = new Thread(() -> {
            synchronized (resource1) {
                System.out.println("Thread 2: Locked resource 1");

                try {
                    Thread.sleep(1000);  // Introduce a delay to ensure both threads try to lock resources
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }

                synchronized (resource2) {
                    System.out.println("Thread 2: Locked resource 2");
                }
            }
        });

        // Start both threads
        t1.start();
        t2.start();
    }
}
