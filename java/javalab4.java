import java.util.Scanner;
interface Shape{
    void input();
    void area();

}
class Circle implements Shape{
    double radius;
    public void input(){
        
        Scanner s1 = new Scanner(System.in);
        System.out.println("Enter raidus of circle = ");
        radius=s1.nextDouble();
        
    }
    public void area(){
        double ans=3.14*radius*radius;
        System.out.println("area of circle is : " + ans);
    }
}
class Triangle implements Shape{
    double base,height;
    public void input(){
        
        Scanner s2 = new Scanner(System.in);
        System.out.println("Enter base of triangle");
        base=s2.nextDouble();
        System.out.println("Enter height of triangle");
        height=s2.nextDouble();
        
    }
    public void area(){
        double ans=0.5*base*height;
        System.out.println("Area of triangle is : " + ans);
    }
}

public class javalab4 {
    public static void main(String[] args) {
        Circle cir=new Circle();
        cir.input();
        cir.area();
        Triangle tri=new Triangle();
        tri.input();
        tri.area();
    }
}
