class A1{
    int a=80;
    A1(){
        
        System.out.println("value  of a");
    }
}
class B1 extends A1{
    int a=39;
    B1(){

    }
    void display(){
        System.out.println(super.a);
    }
}

public class super_key {
    public static void main(String[] args) {
    B1 s2 = new B1();
    s2.display();
    }
}
