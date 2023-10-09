import java.awt.*;

import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class javaclass4 {
    javaclass4(){
        Frame f = new Frame("cheakbox");
        Checkbox cheak1 = new Checkbox("kava");
        cheak1.setBounds(100,100,200,200);
        Checkbox cheal2 = new Checkbox("c++");
        cheal2.setBounds(100, 100, 50, 50);

        f.add(cheak1);
        f.add(cheal2);
        f.setSize(400, 400);
        f.setVisible(true);

        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we){
                System.exit(0);
            }
        });

    }
    public static void main(String[] args) {
        new javaclass4();
    }
}
