import java.io.FileNotFoundException;

// User-defined checked exception
class CustomCheckedException extends Exception {
    public CustomCheckedException(String message) {
        super(message);
    }
}

// User-defined unchecked exception
class CustomUncheckedException extends RuntimeException {
    public CustomUncheckedException(String message) {
        super(message);
    }
}

public class ExceptionExample {
    // Method throwing a checked exception
    public static void throwCheckedException() throws CustomCheckedException {
        throw new CustomCheckedException("This is a checked exception.");
    }

    // Method throwing an unchecked exception
    public static void throwUncheckedException() {
        throw new CustomUncheckedException("This is an unchecked exception.");
    }

    // Method that uses a built-in checked exception
    public static void readFile() throws FileNotFoundException {
        throw new FileNotFoundException("File not found.");
    }

    public static void main(String[] args) {
        try {
            // Throwing and catching a checked exception
            throwCheckedException();
        } catch (CustomCheckedException e) {
            System.out.println("Caught custom checked exception: " + e.getMessage());
        }

        try {
            // Throwing and catching an unchecked exception
            throwUncheckedException();
        } catch (CustomUncheckedException e) {
            System.out.println("Caught custom unchecked exception: " + e.getMessage());
        }

        try {
            // Throwing and catching a built-in checked exception
            readFile();
        } catch (FileNotFoundException e) {
            System.out.println("Caught FileNotFoundException: " + e.getMessage());
        }
    }
}