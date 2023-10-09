import java.io.File;
import java.io.IOException;

public class filecreation{
    public static void main(String[] args) {
        File f = new File("C:\\Users\\HP\\Downloads\\kunal.txt");
        try {
            if(f.createNewFile()){
                System.out.println("file created");
            }else{
                System.out.println("file already exists");
            }
        } catch (IOException e) {
            System.out.println(e);
        }
    }
}
