import java.io.*;
import java.util.*;

public class buffeereader {
    public static void main(String[] args) throws IOException {
        //InputStreamReader io =new InputStreamReader(System.in);
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter name of string");
        String pin = br.readLine();
        System.out.println("name of string is : "+ pin);
        Scanner sc= new Scanner(System.in);
        int m=sc.nextInt();
        System.out.println("enter any integer"+m);
    }
}