//using constructor call
class Rectangle {

    int length , width;
    Rectangle(int x,int y){
        length=x;
        width=y;
    }
    int rectarea(){
        return(length*width);
    }
}
public class Rectarea1 {
    public static void main(String args[]){
    
    Rectangle rect1=new Rectangle(20, 15);
    int area1 =rect1.rectarea();
    System.out.println("Area is = " + area1);
}
}
