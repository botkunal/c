import java.io.*;

public class cheak {

    public static void main(String[] args) throws Exception{
        FileReader F=new FileReader("kunal.txt");
        BufferedReader fi = new BufferedReader(F);
        for(int i=0;i<3;i++)
        System.out.println(fi.readLine());
        fi.close();
    }
}
