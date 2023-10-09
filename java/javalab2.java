public class javalab2{
    int a,b;
    javalab2(){
        a=10;
        b=20;
        System.out.println("inside default constructor");
    }
    javalab2 get(){
        return this;
    }
   
    javalab2(int a,int b){
        this.a=a;
        this.b=b;
        System.out.println("inside parameteised construtor");
    }
    void display(){
        System.out.println(a+"   "+b);
    }
    
    public static void main(String[] args) {
       
        javalab2 d2 = new javalab2();
        d2.get();
        d2.display();
        javalab2 d1=new javalab2(3,6);
        d1.display();
    }
}
