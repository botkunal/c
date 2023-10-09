import java.io.File;

public class fileinfo {
    public static void main(String[] args) {
        File f = new File("C:\\Users\\HP\\Downloads\\kunal.txt");
        if(f.exists()){
            System.out.println("file name" + f.getName());
            System.out.println("file location" + f.getAbsolutePath());
            System.out.println("file read " + f.canRead());
            System.out.println("file write " + f.canWrite());
            System.out.println("file length " + f.length());
            System.out.println("file delted " + f.delete());
        }
    }
}