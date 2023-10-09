public class null_pointer_exp {
    public static void main(String[] args) {
        String str =null;
        try {
            System.out.println(str.toUpperCase());
        } catch (NullPointerException e) {
            // TODO: handle exception
            System.out.println(e);
        }       
    }
}
