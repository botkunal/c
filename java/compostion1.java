class HUman1 {
    private String name;

    public HUman1(String name) {
        this.name = name;
    }

    public String tostring() {
        return name;
    }
}

class Cat {
    private String name;
    private HUman1 owner;
    public Cat (String name,HUman1 owner){
        this.name= name;
        this.owner= owner;
    }
    public String tostring(){
        return String.format("i am " + "%s,I belong to"+" %s", name, owner);
    }
}

public class compostion1 {
    public static void main(String[] args) {
        HUman1 jhon = new HUman1("jhon");
        Cat tommy = new Cat("tommy", jhon);
        System.out.println(tommy);
    }
}
