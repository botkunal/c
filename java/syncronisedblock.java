class msg {
    public void show(String name) {
        synchronized (this) {
            for (int i = 0; i < 3; i++)
                System.out.println("how are u" + name);
        }
    }
}

class ourthread extends Thread {
    msg m;
    String name;
    
    ourthread(msg m,String name){
    //    public void run() {
    //        m.show(name);
    //    }
    }
    
}

public class syncronisedblock {
    public static void main(String[] args) {
        msg m = new msg();
        ourthread t1 = new ourthread(m, "a1");
        ourthread t2 = new ourthread(m, "b1");
        t1.start();
        t2.start();

    }
}
