public class MyClass {
    private static int countCreated = 0;
    private static int countFinalized = 0;
    private int id;

    public MyClass() {
        countCreated++;
        id = countCreated;
        System.out.println("Created object with ID " + id);
    }

    @Override
    protected void finalize() throws Throwable {
        countFinalized++;
        System.out.println("Finalized object with ID " + id);
        super.finalize();
    }

    public static void main(String[] args) {
        for (int i = 0; i < 5; i++) {
            MyClass obj = new MyClass();
            obj = null; // Mark object for garbage collection
        }

        // Wait for garbage collection to finish
        System.gc();

        System.out.println("Total objects created: " + countCreated);
        System.out.println("Total objects finalized: " + countFinalized);
    }
}



