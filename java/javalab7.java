public class javalab7 {
    public static void main(String[] args) {
        String str = "Hello, World!";
        
        // length() - returns the length of the string
        int length = str.length();
        System.out.println("Length: " + length);
        
        // charAt() - returns the character at the specified index
        char charAtIndex = str.charAt(7);
        System.out.println("Character at index 7: " + charAtIndex);
        
        // substring() - returns a substring of the original string
        String substring = str.substring(7, 12);
        System.out.println("Substring from index 7 to 12: " + substring);
        
        // indexOf() - returns the index of the specified character or substring
        int indexOfComma = str.indexOf(',');
        System.out.println("Index of comma: " + indexOfComma);
        
        // contains() - checks if the string contains a specified character or substring
        boolean containsWorld = str.contains("World");
        System.out.println("Contains 'World': " + containsWorld);
        
        // startsWith() - checks if the string starts with the specified prefix
        boolean startsWithHello = str.startsWith("Hello");
        System.out.println("Starts with 'Hello': " + startsWithHello);
        
        // endsWith() - checks if the string ends with the specified suffix
        boolean endsWithExclamation = str.endsWith("!");
        System.out.println("Ends with '!': " + endsWithExclamation);
        
        // toUpperCase() - converts the string to uppercase
        String uppercase = str.toUpperCase();
        System.out.println("Uppercase: " + uppercase);
        
        // toLowerCase() - converts the string to lowercase
        String lowercase = str.toLowerCase();
        System.out.println("Lowercase: " + lowercase);
        
        // replace() - replaces all occurrences of a character or substring with another character or substring
        String replaced = str.replace("o", "e");
        System.out.println("Replaced 'o' with 'e': " + replaced);
        
        // trim() - removes leading and trailing whitespace from the string
        String stringWithWhitespace = "   Trim Example   ";
        String trimmed = stringWithWhitespace.trim();
        System.out.println("Trimmed: " + trimmed);
    }
}
