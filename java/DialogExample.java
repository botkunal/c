import java.awt.*;
import java.awt.event.*;

public class DialogExample {
    private Frame frame;
    private Dialog dialog;
    
    public DialogExample() {
        frame = new Frame("Dialog Example");
        //setDefaultCloseOperation()
        frame.setSize(300, 200);
        
        Button button = new Button("Open Dialog");
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                showDialog();
            }
        });
        
        frame.add(button);
        frame.setVisible(true);

        frame.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we){
                System.exit(0);
            }
        });

    }
    
    private void showDialog() {
        dialog = new Dialog(frame, "Dialog", true);
        dialog.setSize(200, 100);
        
        Label label = new Label("This is a dialog.");
        dialog.add(label);
        
        Button closeButton = new Button("Close");
        closeButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                dialog.dispose();
            }
        });
        
        dialog.add(closeButton, BorderLayout.SOUTH);
        
        dialog.setVisible(true);
    }
    
    public static void main(String[] args) {
        new DialogExample();
    }
}
