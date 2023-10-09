//import java.io.File;
//import java.io.FileNotFoundException;
//import java.io.IOException;
import java.io.*;

class CustomCheckedException extends Exception {
    public CustomCheckedException(String message) {
        super(message);
    }
}

class CustomUncheckedException extends RuntimeException {
    public CustomUncheckedException(String message) {
        super(message);
    }
}

public class javalab6 {
    public static void throwCheckedException() throws IOException {
        throw new IOException("Checked Exception");
    }
    public static void main(String[] args) {
        // Inbuilt checked exception (IOException)
        // try {
        //     File file = new File("nonexistent.txt");
        //     file.createNewFile();
        // } catch (IOException e) {
        //     System.out.println("Caught IOException: " + e.getMessage());
        // }
        try {
            // Inbuilt checked exception
            throwCheckedException();
        } catch (IOException e) {
            System.out.println("Caught inbuilt checked exception: " + e.getMessage());
        }

        // Inbuilt unchecked exception (ArrayIndexOutOfBoundsException)
        try {
            int[] numbers = {1, 2, 3};
            System.out.println(numbers[8]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Caught ArrayIndexOutOfBoundsException: " + e.getMessage());
        }

        // User-defined checked exception
        try {
            throw new CustomCheckedException("This is a custom checked exception.");
        } catch (CustomCheckedException e) {
            System.out.println("Caught CustomCheckedException: " + e.getMessage());
        }

        // User-defined unchecked exception
        try {
            throw new CustomUncheckedException("This is a custom unchecked exception.");
        } catch (CustomUncheckedException e) {
            System.out.println("Caught CustomUncheckedException: " + e.getMessage());
        }
    }
}
