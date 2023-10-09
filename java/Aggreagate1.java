class genreal {
    int sqar(int i) {
        return i * i;
    }
}

class cir {
    genreal gen;
    double d = 3.14;

    double area(int radius) {
        gen = new genreal();
        int sqr = gen.sqar(radius);
        return d * sqr;
    }
}

public class Aggreagate1 {
    public static void main(String[] args) {
        cir c = new cir();
        double res = c.area(5);
        System.out.println(res);
    }

}
