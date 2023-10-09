public class javalab3 {

    private static int counter = 0;
    private static int countFinalized = 0;

    private int id;

    public javalab3() {
        this.id = ++counter;
        System.out.println("Object " + this.id + " created.");
    }

    public void finalize() {
        countFinalized++;
        System.out.println("Object " + this.id + " finalized.");
    }

    public static void main(String[] args) {
        javalab3 obj1 = new javalab3();
        javalab3 obj2 = new javalab3();
        javalab3 obj3 = new javalab3();
        //System.out.println("Total objects created: " + counter);
       
        // Force garbage collection to trigger finalization
        obj1 = null;
        obj2 = null;
        obj3 = null;
        System.gc();
        System.out.println("Total objects created: " + counter);
        System.out.println("Total objects finalized: " + countFinalized);
    }
}
