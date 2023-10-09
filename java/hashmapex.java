//import java.security.Key;
import java.util.*;
public class hashmapex {
    public static void main(String[] args)throws Exception {
        Map<Integer,String> map = new HashMap<>();
        map.put(101,"kunal");
        map.put(102,"rupa");
        map.put(103,"tulsi");
        //map.remove(103);
        

        System.out.println("size of map"+ map.size());
        System.out.println(map);

        for(Map.Entry m:map.entrySet()){
            System.out.println(m.getKey()+"  "+m.getValue());
        }

        Collection<String> val= map.values();
        for(String V:val){
            System.out.println("values"+V);
        }
        //map.forEach(null);
        // if(map.containsKey("tulsi")){
        //     Integer a = map.get("tulsi");
        //     System.out.println("value for key:"+a);
        // }
    }
}
