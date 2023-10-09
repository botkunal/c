import java.io.*;

public class filewriter {
    public static void main(String[] args) {
        try {
            FileWriter f = new FileWriter("c:\\Users\\HP\\Downloads\\kunal.txt");
            try{
                f.write("JAVA is a good programing language5");
            }finally {
                f.close();
                System.out.println("finally block is executed which always runs");
            }
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
