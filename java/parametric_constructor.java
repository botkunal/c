class A{
    A(int a){
        System.out.println(a);
    }
}
class B extends A{
    B(){
        super(1);
        System.out.println("2");
    }
}
public class parametric_constructor {
    public static void main(String[] args) {
        B b1 =new B();
    }
}
