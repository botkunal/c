public class javalab8 {
    public static void main(String[] args) {
        // Create T2 thread to print characters
        Thread t2 = new Thread(() -> {
            for (char c = 'A'; c <= 'J'; c++) {
                System.out.print(c + " ");
                try {
                    Thread.sleep(500); // Sleep for 500 milliseconds
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });

        // Create T1 thread to print numbers
        Thread t1 = new Thread(() -> {
            try {
               t2.join(); // Wait for T2 to finish
            } catch (InterruptedException e) {
               e.printStackTrace();
            }

            for (int i = 1; i <= 10; i++) {
                System.out.print(i + " ");
                try {
                    Thread.sleep(500); // Sleep for 500 milliseconds
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        });

        t2.start(); // Start T2 thread
        t1.start(); // Start T1 thread
    }
}
