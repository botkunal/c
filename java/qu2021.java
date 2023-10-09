public class qu2021 {
    public void m1() {
        m2();
        System.out.println("1");
    }

    public void m2() {
        m3();
        System.out.println("2");
    }

    public void m3() {
        System.out.println("3");
        try {
            int sum = 4 / 0;
            System.out.println("4");
        } catch (Exception e) {
            System.out.println("5");
        }
        System.out.println("7");
    }

    public static void main(String[] args) {
        qu2021 obj1 = new qu2021();
        obj1.m1();
    }
}