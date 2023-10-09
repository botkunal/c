import java.util.*;

public class hashset {
    public static void main(String[] args) {
        Vector<String> set = new Vector<>();
        set.add("a");
        set.add("b");
        set.add("c");
        set.add("d");

        Iterator<String> otr =set.iterator();
        while(otr.hasNext()){
            System.out.println(otr.next());
        }
    }   
}
