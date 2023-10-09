class student
{
    int roll_no,marks;
    String name;
    void inp(){
        System.out.println("roll_no and name  and marks");
    }
}

class ankit extends student
{
    void dis(){
        roll_no=47;
        name="kunal";
        marks=89;
        System.out.println(roll_no + "   " + name + "   "+marks);
    }
// }
// public class Single_inhertaince {
    public static void main(String[] args) {
    ankit r = new ankit();
    r.inp();
    r.dis();    
    }
}
