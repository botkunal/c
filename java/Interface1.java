import java.util.Scanner;

interface client
{
    void input();
    void output();
}

public class Interface1 implements client
{
    String name;double salary;
    public void input()
    {
        Scanner r= new Scanner(System.in);
        System.out.println("Enter user name");
        name=r.nextLine();
        System.out.println("Enter user salary");
        salary=r.nextDouble();
    }    
    public void output()
    {
        System.out.println(name + " " + salary);
    }
    public static void main(String[] args) {
        client c = new Interface1();
        c.input();
        c.output();

    }
}
