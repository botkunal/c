import java.util.*;

public class Hashtableex {
    public static void main(String[] args) {
        Hashtable <String ,Integer> hash = new Hashtable<>();
        hash.put("a", 1);
        hash.put("b", 2);
        hash.put("c", 3);
        int a = hash.get("b");
        System.out.println("value of b   "+ a);
        hash.remove("c");
        Enumeration<String> kye= hash.keys();
        while(kye.hasMoreElements()){
            String key = kye.nextElement();
            System.out.println("key  "+ key);
        }
    }
}
