//import mypack.pakageA;
public class pakageB {
    public void show1(){
        System.out.println("from gfg");
    }
    public static void main(String[] args) {
        pakageA obj1 = new pakageA();
        pakageB obj2 = new pakageB();
        obj1.show();
        obj2.show1();
    }
}
