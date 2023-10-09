//package firstprogram;
import java.util.Scanner;

class employee{
    String name;
    String dept;
    int age;
    int salary;
}
public class javalab1 {

    public static void main(String[] args) {

        Scanner r =new Scanner(System.in);
        System.out.println("Enter no. of employee");
        int num=r.nextInt();

        employee emp[] = new employee[num];

        for(int i=0;i<num;i++){
            emp[i]=new employee();System.out.println("Enter " + (i+1)+" employee data:");

            System.out.println("name of employee");
            emp[i].name=r.next();
            System.out.println("department of employee");
            emp[i].dept=r.next();
            System.out.println("age of employee");
            emp[i].age=r.nextInt();
            System.out.println("salary of employee");
            emp[i].salary=r.nextInt();

        }
        for(int i=0;i<num;i++){
        System.out.println((i+1) + " Emplayee name department age and salary are " + emp[i].name + " " +emp[i].dept+" "+emp[i].age+" "+emp[i].salary);
        }
    }
}
