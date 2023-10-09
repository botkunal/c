import java.io.IOException;

public class javalab33 {
    public static void main(String[] args) {
        // Inbuilt checked exception (IOException)
        try {
            File file = new File("nonexistent.txt");
            file.createNewFile();
        } catch (IOException e) {
            System.out.println("Caught IOException: " + e.getMessage());
        }
    }
}
