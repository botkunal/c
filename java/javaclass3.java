import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class javaclass3 {
    javaclass3() {
        Frame f = new Frame("panel example");

        Panel panel = new Panel();
        Button b1 = new Button("butoon 1");
        b1.setBounds(10, 20, 200, 100);
        b1.setBackground(Color.yellow);
        panel.add(b1);
        panel.setBounds(4, 5, 10, 10);
        panel.setBackground(Color.green);
        f.setVisible(true);
        f.setSize(400, 400);
        // f.layout(null);
        // f.setTitle("Health Calculator");
        f.add(panel);
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });

    }

    public static void main(String[] args) {
        new javaclass3();
    }

}
