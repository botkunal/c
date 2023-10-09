abstract class Animal
{
    public abstract void eat();
    public void Animalsleep(){
        System.out.println("Zzz");
    }
}
class dag extends Animal
{
    public void eat(){
        System.out.println("dog eat bone");
    }
}

public class abstractfun {
    public static void main(String[] args) {
        Animal mydog = new dag();
        mydog.Animalsleep();
        mydog.eat();
    }
}
